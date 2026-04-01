#include <iostream>
#include <type_traits>

template <typename T, typename U>
auto myMax(T a, U b) -> typename std::common_type<T, U>::type {
    return (a > b) ? a : b;
}

int main() {
    std::cout << myMax(1, 1.2);
}