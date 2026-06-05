#include <stdio.h>
#include <assert.h>

// etapa REFATORAÇÃO(refatorar/melhorar, sem estragar oque já tem)
void twoSum(int nums[], int tamanho, int target, int result[]) 
{
    // segurança, retorna se não encontar nada.
    result[0] = -1;
    result[1] = -1;
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

// Teste 1 
void testTwoSumEncontrarAlvo18()
{
    int nums[] = {2, 7, 11, 15};
    int indices[2];
    twoSum(nums, 4, 18, indices);
    assert(indices[0] == 1 && indices[1] == 2);
    printf("Teste 1 (Encontra alvo): Sucesso!\n");
}

// Teste 2 
void testTwoSumNaoEncontrarAlvo18()
{
    int nums[] = {2, 7, 11, 15};
    int indices[2];
    twoSum(nums, 4, 100, indices); // 100 não existe na soma de nenhum par
    assert(indices[0] == -1 && indices[1] == -1);
    printf("Teste 2 (Alvo inexistente): Sucesso!\n");
}

int main() 
{
    testTwoSumEncontrarAlvo18();
    testTwoSumNaoEncontrarAlvo18();
    return 0;
}
