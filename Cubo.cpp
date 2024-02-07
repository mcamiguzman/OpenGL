#include "Cubo.h"

void Cubo::DibujarCubo(float x, float y, float z,float r) {
    glPushMatrix();
        glPushMatrix();
            glTranslatef(x, y - 0.1, z);
            glRotatef(r, 0, 0, 1);
            glutSolidCube(0.5);
        glPopMatrix();
    glPopMatrix();
}
