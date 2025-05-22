# Competitive-Programming-Mathematics-Templates
Essential math-related C++ templates

## Templates
- [Modular Exponentiation](#1-modular-exponentiation)

---

### 1. Modular Exponentiation

**File:** `ExponentiationTemplates.cpp`  
**Description:** Calculates \( a^b % mod \) using fast binary exponentiation in logarithmic time \( \mathcal{O}(\log b) \).

```cpp
const int mod = 1e9 + 7;
template<typename T>
T exponentiation(T a, T b) {
    T k = 1;
    while(b) {
        if(b & 1) k = k * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return k;
}
