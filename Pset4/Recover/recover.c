#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }

    char *file = argv[1];

    FILE *in = fopen(file, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", file);
        return 2;
    }

    const int size = 512;
    unsigned char buffer[size];

    int count = 0;
    FILE *out = NULL;

    while (fread(buffer, size, 1, in))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && buffer[3] <= 0xef && buffer[3] >= 0xe0)
        {
            if (count > 0)
            {
                fclose(out);
            }

            char filename[7];
            sprintf(filename, "%03d.jpg", count);

            out = fopen(filename, "w");
            if (out == NULL)
            {
                fprintf(stderr, "Could not create %s.\n", filename);
                return 3;
            }

            count++;
        }

        if (out != NULL)
        {
            fwrite(buffer, size, 1, out);
        }
    }

    fclose(out);
    fclose(in);

    return 0;
}