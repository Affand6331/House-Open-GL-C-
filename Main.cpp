#include <windows.h>
#include <GL/glut.h>

//void initGL()
//{
//glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //Background
    glBegin(GL_POLYGON); //Latar
    glColor3f(0.341f,0.608f,0.741f);
    glVertex2f( -1.0f,1.0f);
    glVertex2f( 1.0f, 1.0f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f( -1.0f, -1.0f);
    glEnd();

    //Base Hitam Stroke
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( -0.0961375f, 0.50665f);
    glVertex2f( 0.6211625f, 0.50665f);
    glVertex2f( 0.6211625f, 0.3996f);
    glVertex2f( 0.5676875f, 0.3996f);
    glVertex2f( 0.5676875f, 0.105883333333333f);
    glVertex2f( 0.7336625f, -0.142333333333333f);
    glVertex2f( 0.7336625f, -0.505766666666667f);
    glVertex2f( -0.7335f, -0.505766666666667f);
    glVertex2f( -0.7335f, -0.0012166666666667f);
    glEnd();

        //Atap
    glBegin(GL_POLYGON);
    glColor3f(0.227f,0.239f,0.224f);
    glVertex2f( -0.0928749999999999f, 0.481416666666667f);
    glVertex2f( 0.602825f, 0.481416666666667f);
    glVertex2f( 0.602825f, 0.4238f);
    glVertex2f( -0.07935f, 0.4238f);
    glVertex2f( -0.7162f, -0.0767333333333333f);
    glVertex2f( -0.7162f, -0.0138f);

    glEnd();

    //Tembok 1
    glBegin(GL_POLYGON);
    glColor3f(0.988f,0.871f,0.776f);
    glVertex2f( -0.06755f, 0.39835f);
    glVertex2f( 0.549025f, 0.39835f);
    glVertex2f( 0.549025f, 0.113366666666667f);
    glVertex2f( -0.06755f, 0.113366666666667f);

    glEnd();

                //Stroke Jendela
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.012775f, 0.351416666666667f);
    glVertex2f( 0.487875f, 0.351416666666667f);
    glVertex2f( 0.487875f, 0.172716666666667f);
    glVertex2f( 0.012775f, 0.172716666666667f);

    glEnd();

    //Jendela
    glBegin(GL_POLYGON);
    glColor3f(0.702f,0.863f,0.961f);
    glVertex2f( 0.0313625f, 0.32685f);
    glVertex2f( 0.4692875f, 0.32685f);
    glVertex2f( 0.4692875f, 0.197283333333333f);
    glVertex2f( 0.0313625f, 0.197283333333333f);
    glEnd();

    //Atap 2
    glBegin(GL_POLYGON);
    glColor3f(0.227f,0.239f,0.224f);
    glVertex2f( -0.0561499999999999f, 0.0879333333333333f);
    glVertex2f( 0.5539375f, 0.0879333333333333f);
    glVertex2f( 0.704725f, -0.135116666666667f);
    glVertex2f( 0.0827125f, -0.135116666666667f);
    glEnd();

    //Tembok 2
    glBegin(GL_POLYGON);
    glColor3f(0.988f,0.871f,0.776f);
    glVertex2f( 0.0863f, -0.158583333333333f);
    glVertex2f( 0.716125f, -0.158583333333333f);
    glVertex2f( 0.716125f, -0.483366666666667f);
    glVertex2f( 0.0863f, -0.483366666666667f);

    glEnd();

    //Tembok 3
    glBegin(GL_POLYGON);
    glColor3f(0.953f,0.651f,0.439f);
    glVertex2f( -0.7162f, -0.105766666666667f);
    glVertex2f( -0.0850375f, 0.38895f);
    glVertex2f( -0.0850375f, 0.0962f);
    glVertex2f( 0.0686125f, -0.150866666666667f);
    glVertex2f( 0.0679625f, -0.481633333333333f);
    glVertex2f( -0.7162f, -0.480866666666667f);
    glEnd();

    //Stroke Jendela
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.4139f, -0.323266666666667f);
    glVertex2f( 0.4139f, -0.194016666666667f);
    glVertex2f( 0.6708125f, -0.194016666666667f);
    glVertex2f( 0.6708125f, -0.323266666666667f);
    glVertex2f( 0.6947875f, -0.323266666666667f);
    glVertex2f( 0.665925f, -0.386633333333333f);
    glVertex2f( 0.419075f, -0.386633333333333f);
    glVertex2f( 0.3902125f, -0.323266666666667f);
    glEnd();

    //Jendela
    glBegin(GL_POLYGON);
    glColor3f(0.702f,0.863f,0.961f);
    glVertex2f( 0.4311375f, -0.217933333333333f);
    glVertex2f( 0.653575f, -0.217933333333333f);
    glVertex2f( 0.653575f, -0.323266666666667f);
    glVertex2f( 0.4311375f, -0.323266666666667f);
    glEnd();

    //Kayu
    glBegin(GL_POLYGON);
    glColor3f(0.761f,0.467f,0.369f);
    glVertex2f( 0.42215f, -0.347283333333333f);
    glVertex2f( 0.6625625f, -0.347283333333333f);
    glVertex2f( 0.6559625f, -0.36305f);
    glVertex2f( 0.4287625f, -0.36305f);
    glEnd();

    //Stroke Rumput
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.606125f, -0.411733333333333f);
    glVertex2f( 0.7011375f, -0.411733333333333f);
    glVertex2f( 0.7011375f, -0.483366666666667f);
    glVertex2f( 0.606125f, -0.483366666666667f);
    glEnd();

    //Stroke Rumput 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.4899125f, -0.411733333333333f);
    glVertex2f( 0.584925f, -0.411733333333333f);
    glVertex2f( 0.584925f, -0.483366666666667f);
    glVertex2f( 0.4899125f, -0.483366666666667f);
    glEnd();

    //Stroke Rumput 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.372325f, -0.411733333333333f);
    glVertex2f( 0.4673375f, -0.411733333333333f);
    glVertex2f( 0.4673375f, -0.483366666666667f);
    glVertex2f( 0.372325f, -0.483366666666667f);
    glEnd();

    //Stroke Rumput 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.372325f, -0.411733333333333f);
    glVertex2f( 0.4673375f, -0.411733333333333f);
    glVertex2f( 0.4673375f, -0.483366666666667f);
    glVertex2f( 0.372325f, -0.483366666666667f);
    glEnd();

    //Stroke Rumput 4
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( 0.1079f, -0.411733333333333f);
    glVertex2f( 0.2029125f, -0.411733333333333f);
    glVertex2f( 0.2029125f, -0.483366666666667f);
    glVertex2f( 0.1079f, -0.483366666666667f);
    glEnd();

    //Rumput
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( 0.6212875f, -0.433316666666667f);
    glVertex2f( 0.684875f, -0.433316666666667f);
    glVertex2f( 0.684875f, -0.483366666666667f);
    glVertex2f( 0.6212875f, -0.483366666666667f);
    glEnd();

    //Rumput 2
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( 0.505075f, -0.433316666666667f);
    glVertex2f( 0.5686625f, -0.433316666666667f);
    glVertex2f( 0.5686625f, -0.483366666666667f);
    glVertex2f( 0.505075f, -0.483366666666667f);
    glEnd();

    //Rumput 3
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( 0.3874875f, -0.433316666666667f);
    glVertex2f( 0.451075f, -0.433316666666667f);
    glVertex2f( 0.451075f, -0.483366666666667f);
    glVertex2f( 0.3874875f, -0.483366666666667f);
    glEnd();

      //Rumput 4
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( 0.1230625f, -0.433316666666667f);
    glVertex2f( 0.18665f, -0.433316666666667f);
    glVertex2f( 0.18665f, -0.483366666666667f);
    glVertex2f( 0.1230625f, -0.483366666666667f);
    glEnd();

    // Stroke Pintu
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2237625f, -0.23685f);
    glVertex2f(0.3538625f, -0.23685f);
    glVertex2f(0.3538625f, -0.483366666666667f);
    glVertex2f(0.2237625f, -0.483366666666667f);
    glEnd();

    // Pintu
    glBegin(GL_POLYGON);
    glColor3f(0.761f, 0.467f, 0.369f);
    glVertex2f(0.241575f, -0.261633333333333f);
    glVertex2f(0.3357625f, -0.261633333333333f);
    glVertex2f(0.3357625f, -0.483366666666667f);
    glVertex2f(0.241575f, -0.483366666666667f);
    glEnd();

    // Stroke Pohon
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.0724875f, -0.135116666666667f);
    glVertex2f(0.0347875000000001f, -0.135116666666667f);
    glVertex2f(0.0347875000000001f, -0.436633333333333f);
    glVertex2f(-0.0724875f, -0.436633333333333f);
    glEnd();

    // Stroke Pohon 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6901f, -0.135116666666667f);
    glVertex2f(-0.582825f, -0.135116666666667f);
    glVertex2f(-0.582825f, -0.436633333333333f);
    glVertex2f(-0.6901f, -0.436633333333333f);
    glEnd();

    // Stroke Pohon3
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.0412f, -0.436633333333333f);
    glVertex2f(0.00478750000000005f, -0.436633333333333f);
    glVertex2f(0.00478750000000005f, -0.481633333333333f);
    glVertex2f(-0.0412f, -0.481633333333333f);
    glEnd();

    // Stroke Pohon 4
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6588125f, -0.436633333333333f);
    glVertex2f(-0.612825f, -0.436633333333333f);
    glVertex2f(-0.612825f, -0.481633333333333f);
    glVertex2f(-0.6588125f, -0.481633333333333f);
    glEnd();



    //Pohon 1
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( -0.0548875f, -0.158583333333333f);
    glVertex2f( 0.0173375f, -0.158583333333333f);
    glVertex2f( 0.0173375f, -0.411733333333333f);
    glVertex2f( -0.0548875f, -0.411733333333333f);


    glEnd();


    //Pohon 2
    glBegin(GL_POLYGON);
    glColor3f(0.404f,0.737f,0.275f);
    glVertex2f( -0.6725f, -0.158583333333333f);
    glVertex2f( -0.600275f, -0.158583333333333f);
    glVertex2f( -0.600275f, -0.411733333333333f);
    glVertex2f( -0.6725f, -0.411733333333333f);
    glEnd();

    //Garasi
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( -0.55625f, -0.154016666666667f);
    glVertex2f( -0.0977249999999999f, -0.154016666666667f);
    glVertex2f( -0.0977249999999999f, -0.505766666666667f);
    glVertex2f( -0.55625f, -0.505766666666667f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f( -0.537625f, -0.260166666666667f);
    glVertex2f( -0.1163625f, -0.260166666666667f);
    glVertex2f( -0.1163625f, -0.3169f);
    glVertex2f( -0.537625f, -0.3169f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f( -0.537625f, -0.178633333333333f);
    glVertex2f( -0.1163625f, -0.178633333333333f);
    glVertex2f( -0.1163625f, -0.235383333333333f);
    glVertex2f( -0.537625f, -0.235383333333333f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f( -0.537625f, -0.342616666666667f);
    glVertex2f( -0.1163625f, -0.342616666666667f);
    glVertex2f( -0.1163625f, -0.39935f);
    glVertex2f( -0.537625f, -0.39935f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f( -0.537625f, -0.424133333333333f);
    glVertex2f( -0.1163625f, -0.424133333333333f);
    glVertex2f( -0.1163625f, -0.480866666666667f);
    glVertex2f( -0.537625f, -0.480866666666667f);
    glEnd();

    //Stroke Segitiga
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f( -0.5314625f, -0.0439166666666667f);
    glVertex2f( -0.140575f, 0.263716666666667f);
    glVertex2f( -0.140575f, -0.0439166666666667f);

    glEnd();

    //Jendela Segitiga 1
    glBegin(GL_POLYGON);
    glColor3f(0.702f,0.863f,0.961f);
    glVertex2f( -0.4535375f, -0.0190166666666666f);
    glVertex2f( -0.236275f, 0.159416666666667f);
    glVertex2f( -0.236275f, -0.0190166666666666f);

    glEnd();

    //Jendela Segitiga 2
    glBegin(GL_POLYGON);
    glColor3f(0.702f,0.863f,0.961f);
    glVertex2f( -0.21755f, 0.174283333333333f);
    glVertex2f( -0.1612f, 0.219016666666667f);
    glVertex2f( -0.1612f, 0.04815f);
    glVertex2f( -0.21755f, 0.04815f);

    glEnd();

        //Jendela Segitiga 2
    glBegin(GL_POLYGON);
    glColor3f(0.702f,0.863f,0.961f);
    glVertex2f( -0.21755f, 0.0237f);
    glVertex2f( -0.1612f, 0.0237f);
    glVertex2f( -0.1612f, -0.0190166666666666f);
    glVertex2f( -0.21755f, -0.0190166666666666f);
    glEnd();

    //Kayu
    glBegin(GL_POLYGON);
    glColor3f(0.761f,0.467f,0.369f);
    glVertex2f( -0.02375f, -0.436633333333333f);
    glVertex2f( -0.0126625f, -0.436633333333333f);
    glVertex2f( -0.0126625f, -0.480116666666667f);
    glVertex2f( -0.02375f, -0.480116666666667f);
    glEnd();

    //Kayu
    glBegin(GL_POLYGON);
    glColor3f(0.761f,0.467f,0.369f);
    glVertex2f( -0.6413625f, -0.436633333333333f);
    glVertex2f( -0.630275f, -0.436633333333333f);
    glVertex2f( -0.630275f, -0.480116666666667f);
    glVertex2f( -0.6413625f, -0.480116666666667f);
    glEnd();

    glFlush();
}


int main(int argc, char ** argv)
{
    glutInit(&argc, argv);

    glutInitWindowSize(800, 600);
    glutCreateWindow("Rumah");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
