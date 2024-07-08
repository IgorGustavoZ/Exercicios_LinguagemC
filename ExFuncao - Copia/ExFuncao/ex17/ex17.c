int ex17(float altura1, int cresce1, float altura2, int cresce2)
{
    int anos=0;

    altura1*=100;
    altura2*=100;

    while(altura2<=altura1)
    {
        altura1 += cresce1;
        altura2 += cresce2;
        anos++;
    }
    return anos;
}
