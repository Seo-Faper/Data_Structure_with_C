#include <stdio.h>
int main(void)
{
    int x = 1, y = 2, z[5]; // x| 1 |,  y| 2 |,  z| ? | ? | ? | ? | ? |
    int *p;                 // 주소를 저장하는 *p선언

    p = &x; // p| &x | 즉 x의 주소를 저장

    y = *p; // y에 p주소에 있는 값을 저장 y| 1 |

    *p = 10; // p주소에 10이라는 값 저장, p주소는 x주소가 이므로 x=10

    z[0] = 20; // z| 20 | ? | ? | ? | ? |

    p = &z[0]; // p에 &z[0]주소를 저장 p| &z[0] |

    *p = *p + 10; // z| 30 | ? | ? | ? | ? |

    p = p + 1; // p가 가지고 있는 주소의 +1이 된다. p| &z[1] |

    *p = 100; // *p가 가지고 있는 주소에 100을 저장한다.
              // z| 30 | 100 | ? | ? | ? |

    (*p)++; // *p가 가지고 있는 값을 1증가 시킨다.
            // z| 30 | 101 | ? | ? | ? |

    printf("x=%d, y=%d, z[0]=%d, z[1]=%d\n", x, y, z[0], z[1]);
}