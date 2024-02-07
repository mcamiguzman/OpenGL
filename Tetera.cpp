#include "Tetera.h"

void Tetera::DibujarTetera(float x, float y, float z) {
    glPushMatrix();
        glPushMatrix();
            glTranslatef(x, y - 0.1, z);
            //glRotatef(90, 0, 0, 1);
            glutSolidTeapot(0.5);
        glPopMatrix();
    glPopMatrix();
}
