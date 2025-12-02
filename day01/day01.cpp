#include <iostream>
#include <format>

#include "Dialer.h"
#include "ReadFile.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    std::cout << "Hello and welcome to Advent of Code Day 1" << "!\n";

    const auto lines = ReadFile::all("../../day01/input.txt");

    day01::Dialer dialer(50);

    int count = 0;
    for (const auto& line : lines) {
        day01::dialWithString(dialer, line);
        if (dialer.getPosition() == 0) {
            count++;
        }
    }

    std::cout << count << "\n";
    return 0;
}
