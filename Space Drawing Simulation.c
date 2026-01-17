#include <stdio.h>
#include <math.h>

void drawRocket() {
    printf("\n=== ROCKET DRAWING ===\n");
    printf("       /\\\n");
    printf("      /  \\\n");
    printf("     /__\\\n");
    printf("    |      |\n");
    printf("    | NASA |\n");
    printf("    |      |\n");
    printf("    |  []  |\n");
    printf("    |      |\n");
    printf("    |__|\n");
    printf("   /        \\\n");
    printf("  /____\\\n");
    printf("  \\    /\\    /\n");
    printf("   \\  /  \\  /\n");
    printf("    \\/__\\/\n");
    printf("     ^^^^^^\n");
}

void drawStar() {
    printf("\n=== STAR PATTERN ===\n");
    printf("    *\n");
    printf("   *\n");
    printf("  ***\n");
    printf(" ***\n");
    printf("***\n");
    printf(" ***\n");
    printf("  ***\n");
    printf("   *\n");
    printf("    *\n");
}

void drawPlanet() {
    printf("\n=== PLANET SATURN ===\n");
    printf("      .-\"\"\"\"-.\n");
    printf("    .'        '.\n");
    printf("   /   SATURN   \\\n");
    printf("  |              |\n");
    printf("  |      O       |\n");
    printf("  |              |\n");
    printf("   \\            /\n");
    printf("    '.        .'\n");
    printf("      '-....-'\n");
    printf("  ================\n");
    printf(" ==================\n");
}

void drawSpaceship() {
    printf("\n=== SPACESHIP ===\n");
    printf("        _\n");
    printf("    _/   \\_\n");
    printf("   /           \\\n");
    printf("  |    [o] [o]  |\n");
    printf("  |      ---    |\n");
    printf("   \\_____/\n");
    printf("    |  |   |  |\n");
    printf("    |  |   |  |\n");
    printf("   /   |   |   \\\n");
    printf("  /_____\\\n");
    printf("   ^^^^^^^^^^^^\n");
}

void drawSolarSystem() {
    printf("\n=== MINI SOLAR SYSTEM ===\n");
    printf("                    *\n");
    printf("         o              O\n");
    printf("    o         SUN\n");
    printf("         O        o\n");
    printf("                      *\n");
    printf("    Mercury  Venus  Earth  Mars\n");
}

void drawConstellation() {
    printf("\n=== BIG DIPPER CONSTELLATION ===\n");
    printf("  *       *\n");
    printf("   \\     /\n");
    printf("    *   *\n");
    printf("     \\ /\n");
    printf("      *\n");
    printf("      |\n");
    printf("      *\n");
    printf("      |\n");
    printf("      *\n");
}

void drawMoon() {
    printf("\n=== MOON PHASES ===\n");
    printf("  New    Crescent  Quarter   Full\n");
    printf("   O        D        D)      O\n");
    printf("  ---     ---      ---     ---\n");
    printf("   |       |        |       |\n");
    printf("  Day 1   Day 7   Day 14  Day 21\n");
}

int main() {
    int choice;
    
    printf("===========================================\n");
    printf("       SPACE DRAWING PROGRAM IN C\n");
    printf("===========================================\n");
    printf("Choose what to draw:\n");
    printf("1. Rocket\n");
    printf("2. Star Pattern\n");
    printf("3. Planet Saturn\n");
    printf("4. Spaceship\n");
    printf("5. Solar System\n");
    printf("6. Big Dipper Constellation\n");
    printf("7. Moon Phases\n");
    printf("8. Draw All\n");
    printf("Enter your choice (1-8): ");
    
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            drawRocket();
            break;
        case 2:
            drawStar();
            break;
        case 3:
            drawPlanet();
            break;
        case 4:
            drawSpaceship();
            break;
        case 5:
            drawSolarSystem();
            break;
        case 6:
            drawConstellation();
            break;
        case 7:
            drawMoon();
            break;
        case 8:
            drawRocket();
            drawStar();
            drawPlanet();
            drawSpaceship();
            drawSolarSystem();
            drawConstellation();
            drawMoon();
            break;
        default:
            printf("Invalid choice! Drawing a star by default.\n");
            drawStar();
    }
    
    printf("\n===========================================\n");
    printf("       Thanks for using Space Drawer!\n");
    printf("===========================================\n");
    
    return 0;
}