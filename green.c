#include <stdio.h>
#include <assert.h>

// etapa GREEN(Código minímo para fazer o testa passar)
void twoSum(int nums[], int tamanho, int target, int result[]) 
{
    for (int i = 0; i < tamanho - 1; i++) 
    {
        for (int j = i + 1; j < tamanho; j++) 
        {
            if (nums[i] + nums[j] == target) 
            {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
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
