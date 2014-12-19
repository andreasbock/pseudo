#include "pseudo.h"

void usage ()
{
    printf("usage: pseudo <COMMAND> [OPTIONS]\n");
}

int main (int argc, char *argv[])
{
    if(argc == 1)
    {
        usage();
    }
    return 0;
}
