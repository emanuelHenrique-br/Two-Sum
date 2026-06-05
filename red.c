#include <stdio.h>
#include <assert.h> 

// etapa RED(Escrever um teste que falha/não existe)
void twoSum(int nums[], int tamanho, int target, int result[]) 
{
    result[0] = -1; 
    result[1] = -1;
}

void testTwoSumEncontrarAlvo18() 
{
    int nums[] = {2, 7, 11, 15};
    int indices[2];
    
    twoSum(nums, 4, 18, indices);
    assert(indices[0] == 1); 
    assert(indices[1] == 2);
    
    printf("Teste 1: Sucesso!\n");
}

int main() 
{
    testTwoSumEncontrarAlvo18();
    return 0;
}
