#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 40
#define Z_DEPTH 40

char screen[HEIGHT][WIDTH + 1];

void clear_screen()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            screen[i][j] = ' ';
        }
        screen[i][WIDTH] = '\0';
    }
}

void plot_pixel(int x, int y, char c)
{
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT)
    {
        return;
    }
    screen[y][x] = c;
}

void render_screen()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        printf("%s\n", screen[i]);
    }
}

int main()
{
    double theta = 0.0, phi = 0.0;
    double cos_theta = 1.0, sin_theta = 0.0;
    double cos_phi = 1.0, sin_phi = 0.0;

    while (1)
    {
        clear_screen();

        // Draw the donut
        for (double z = -Z_DEPTH; z <= Z_DEPTH; z += 0.5)
        {
            for (double t = 0.0; t <= 2.0 * M_PI; t += 0.05)
            {
                double ct = cos(t), st = sin(t);
                double x = cos_theta * (ct * (6.0 + cos(z)) + st * sin(z)) - sin_theta * (cos_phi * st * (6.0 + cos(z)) - sin_phi * (ct * sin(z) - st * cos(z)));
                double y = sin_theta * (ct * (6.0 + cos(z)) + st * sin(z)) + cos_theta * (cos_phi * st * (6.0 + cos(z)) - sin_phi * (ct * sin(z) - st * cos(z)));
                int sx = (int)(WIDTH / 2 + x * (WIDTH / 16));
                int sy = (int)(HEIGHT / 2 - y * (HEIGHT / 16));
                plot_pixel(sx, sy, '#');
            }
        }

        // Render the screen
        render_screen();

        // Update the rotation angles
        theta += 0.02;
        phi += 0.01;

        cos_theta = cos(theta);
        sin_theta = sin(theta);
        cos_phi = cos(phi);
        sin_phi = sin(phi);

        // Sleep for a short amount of time to control the frame rate
        usleep(50000);
    }

    return 0;
}