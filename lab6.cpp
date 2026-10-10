#include <iostream>
#include <string.h>


int main() {
	char str[] = "11110001010011000111";
	std::cout << str << "\n";
	int n = strlen(str);
	int count = 1, max_count = 1;
	for (int i = 1;i < n; ++i) {
		if (str[i] == str[i - 1]) {//тут сравнение соседних цифр
			count++;
		} else {
			if (count > max_count){
				max_count = count;
		}
		count = 1;
	}
	}
	if (count > max_count) {//тут контрольная сверка текущего с максимальным числом
		max_count = count;
		//этот блок чисто для грамматики, тип один симвоЛ или несколько символОВ 
	}
	if (max_count == 1) {
		std::cout << "The longest group is about: " << max_count << " symbol \n";
	}
	else {
		std::cout << "The longest group is about: " << max_count << " symbols \n";
	}
	return 0;
}
