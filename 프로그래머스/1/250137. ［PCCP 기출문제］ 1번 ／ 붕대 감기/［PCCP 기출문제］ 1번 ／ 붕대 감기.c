#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int bandage[], size_t bandage_len, int health, int **attacks, size_t attacks_rows, size_t attacks_cols)
{

  int currnentHP          = health;                           // 현재 체력
  int recoveryTime        = 0;                                // 현재 회복 시간

  int castingTime         = bandage[0];                       // 회복 시전 시간
  int recoverySecond      = bandage[1];                       // 초당 회복량
  int additionalRecovery  = bandage[2];                       // 추가 회복량

  int currentAttackNumber = 0;                                // 현재 공격 횟수
  int lastAttackTime      = attacks[attacks_rows - 1][0];     // 마지막 공격 시간
  int currentTime         = 0;                                // 현재 시간


  // 현재 시간이 마지막 공격 시간 보다 작거나 같으면 반복
  for ( ; currentTime <= lastAttackTime; currentTime++)
  {
    
    // ================================ 공격 페이즈 ================================

    //어택 인덱스가 어택스의 행 보다 작고, 그리고 시간이 마지막 공격 시간
    if (currentAttackNumber < attacks_rows && currentTime == attacks[currentAttackNumber][0])
    {
      int damage = attacks[currentAttackNumber][1]; // 피해량
      currnentHP -= damage;
      recoveryTime = 0;

      // printf("%d\n", attackTime);

      // 현재 체력 0 이하면 -1로 반환
      if (currnentHP <= 0)
      {
        return -1;
      }
      currentAttackNumber++;
    }
    // ================================ 회복 페이즈 ================================
    else
    {
      currnentHP += recoverySecond;
      recoveryTime++;
    }

    // 추가 회복
    if (recoveryTime == castingTime)
    {
      currnentHP += additionalRecovery;
      recoveryTime = 0;
    }

    if (currnentHP > health)
    {
      currnentHP = health;
    }
  }

  return currnentHP;
}

