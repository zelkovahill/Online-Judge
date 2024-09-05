#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int bandage[], size_t bandage_len, int health, int **attacks, size_t attacks_rows, size_t attacks_cols)
{
  // 체력은 최대 체력을 넘길 수 없다.

  // bandage[시전시간 = t, 초당 회복량 = x, 추가 회복량 = y]
  // bandage_len : 배열 bandage의 길이

  // attacks[i] [공격 시간, 피해량]
  // attacks[i][0] = 공격시간
  // attacks[i][1] = 피해량

  // 공격 시간을 기준으로 오름차순 정렬된 상태
  // 공격 시간은 모두 다 다르다.

  // attacks_rows : attacks의 행 길이 == 마지막 공격의 시간
  // attacks_cols : attacks의 열 길이

  int currnentHp = health; // 현재 체력 = 최대 체력
  int healTime = 0;        // 연속 회복 시간

  int t = bandage[0]; // 시전 시간
  int x = bandage[1]; // 초당 회복량
  int y = bandage[2]; // 추가 회복량

  int attackIndex = 0;                               // attack 배열의 인덱스
  int lastAttackTime = attacks[attacks_rows - 1][0]; // 마지막 공격 시간

  for (int i = 0; i <= lastAttackTime; i++)
  {
    // 공격받고 -> 회복

    // ================================ 공격 페이즈 ================================

    if (attackIndex < attacks_rows && i == attacks[attackIndex][0])
    {
      int damage = attacks[attackIndex][1]; // 피해량
      currnentHp -= damage;
      healTime = 0;

      // printf("%d\n", attackTime);

      // 현재 체력 0 이하면 -1로 반환
      if (currnentHp <= 0)
      {
        return -1;
      }
      attackIndex++;
    }
    // ================================ 회복 페이즈 ================================
    else
    {
      currnentHp += x;
      healTime++;
    }

    // 추가 회복
    if (healTime == t)
    {
      currnentHp += y;
      healTime = 0;
    }

    if (currnentHp > health)
    {
      currnentHp = health;
    }
  }

  return currnentHp;
}