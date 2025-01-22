#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <thread>

using namespace std;

int main() {
	SetConsoleOutputCP(65001);

	string a(100000, 'a');

	auto copy_start = std::chrono::high_resolution_clock::now();
	std::string copied = a;
	auto copy_end = std::chrono::high_resolution_clock::now();

	auto move_start = std::chrono::high_resolution_clock::now();
	std::string moved = std::move(a);
	auto move_end = std::chrono::high_resolution_clock::now();

	auto copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(copy_end - copy_start).count();
	auto move_duration = std::chrono::duration_cast<std::chrono::microseconds>(move_end - move_start).count();

	std::cout << "Copy time: " << copy_duration << " µs" << std::endl;
	std::cout << "Move time: " << move_duration << " µs" << std::endl;

	return 0;
}