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
    // TODO: Implement me :)
    return -1;
}
