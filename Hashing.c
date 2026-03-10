#include <stdio.h>

int main()
{
    int size, n, key, index, i;

    printf("Enter size of hash table: ");
    scanf("%d", &size);

    int hashTable[size];

    // Initialize hash table with -1
    for(i = 0; i < size; i++)
    {
        hashTable[i] = -1;
    }

    printf("Enter number of keys: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter key: ");
        scanf("%d", &key);

        index = key % size;   // Hash function

        printf("Index = %d %% %d = %d\n", key, size, index);

        hashTable[index] = key;
    }

    printf("\nFinal Hash Table:\n");
    for(i = 0; i < size; i++)
    {
        printf("Index %d -> ", i);

        if(hashTable[i] != -1)
            printf("%d", hashTable[i]);
        else
            printf("Empty");

        printf("\n");
    }

    return 0;
}
