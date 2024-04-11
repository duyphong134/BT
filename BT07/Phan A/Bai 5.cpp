#include <iostream>

char* weird_string() {
    char c[] = "123345";
    return c;
}

int main() {
    char* ptr = weird_string();
    std::cout << "Kết quả: " << *ptr << std::endl;
    return 0;
}
