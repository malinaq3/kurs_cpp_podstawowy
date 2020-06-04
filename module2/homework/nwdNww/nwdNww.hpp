#pragma once

int NWD(int lhs, int rhs) {
    int num;
    while (rhs != 0) {
        num = rhs;
        rhs = lhs % rhs;
        lhs = num;
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {

    if (lhs == 0 && rhs == 0) return 0;

    int num = NWD (lhs, rhs);

    return abs((lhs / num * rhs));
}
