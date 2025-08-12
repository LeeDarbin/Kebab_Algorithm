# Week 01 — 수학 기반 기본 알고리즘

## 학습 키워드
- 유클리드 호제법 (GCD), LCM
- 소수 판별(√N), 에라토스테네스의 체
- 분할정복 거듭제곱 (빠른 거듭제곱)

## 문제 & 풀이 포인트
1. **GCD/LCM**: GCD는 `O(log min(a,b))` — LCM은 `a / GCD(a, b) * b`.
2. **Prime**: √N 까지만 나눠봄. 다수 판별은 **에라토스테네스**로 `O(N log log N)`.
3. **Pow Fast**: `n`의 비트를 이용한 분할정복 (`O(log n)`).

## 파일
- `gcd_lcm.c`
- `prime_sieve.c`
- `fast_pow.c`
