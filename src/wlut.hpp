/**
 *  OpenGL is a trademark of Silicon Graphics, Inc. X Window System is a trademark of X Consortium,
 *  Inc. Spaceball is a registered trademark of Spatial Systems Inc.
 *
 *  The author has taken care in preparation of this documentation but makes no expressed or
 *  implied warranty of any kind and assumes no responsibility for errors or omissions.
 *  No liability is assumed for incidental or consequential damages in connection with or arising
 *  from the use of information or programs contained herein.
 */

#ifndef __WLUT__
#define __WLUT__

#include "GL/freeglut.h"
#include "GL/gl.h"

/// @brief Wrapper class for GLUT
/// @author Francisco Prado
/// @copyright 2023
class Wlut
{
public:
    static const int WLUT_API_VERSION = GLUT_API_VERSION;
    static const int WLUT_XLIB_IMPLEMENTATION = GLUT_XLIB_IMPLEMENTATION;

    /* GLUT display mode bit masks */
    static const int WLUT_RGBA = GLUT_RGBA;
    static const int WLUT_RGB = GLUT_RGB;
    static const int WLUT_INDEX = GLUT_INDEX;
    static const int WLUT_SINGLE = GLUT_SINGLE;
    static const int WLUT_DOUBLE = GLUT_DOUBLE;
    static const int WLUT_ACCUM = GLUT_ACCUM;
    static const int WLUT_ALPHA = GLUT_ALPHA;
    static const int WLUT_DEPTH = GLUT_DEPTH;
    static const int WLUT_STENCIL = GLUT_STENCIL;
    static const int WLUT_MULTISAMPLE = GLUT_MULTISAMPLE;
    static const int WLUT_STEREO = GLUT_STEREO;
    static const int WLUT_LUMINANCE = GLUT_LUMINANCE;

    /* mouse buttons */
    static const int WLUT_LEFT_BUTTON = GLUT_LEFT_BUTTON;
    static const int WLUT_MIDDLE_BUTTON = GLUT_MIDDLE_BUTTON;
    static const int WLUT_RIGHT_BUTTON = GLUT_RIGHT_BUTTON;

    /* mouse button callback state */
    static const int WLUT_DOWN = GLUT_DOWN;
    static const int WLUT_UP = GLUT_UP;

    /* function keys */
    static const int WLUT_KEY_F1 = GLUT_KEY_F1;
    static const int WLUT_KEY_F2 = GLUT_KEY_F2;
    static const int WLUT_KEY_F3 = GLUT_KEY_F3;
    static const int WLUT_KEY_F4 = GLUT_KEY_F4;
    static const int WLUT_KEY_F5 = GLUT_KEY_F5;
    static const int WLUT_KEY_F6 = GLUT_KEY_F6;
    static const int WLUT_KEY_F7 = GLUT_KEY_F7;
    static const int WLUT_KEY_F8 = GLUT_KEY_F8;
    static const int WLUT_KEY_F9 = GLUT_KEY_F9;
    static const int WLUT_KEY_F10 = GLUT_KEY_F10;
    static const int WLUT_KEY_F11 = GLUT_KEY_F11;
    static const int WLUT_KEY_F12 = GLUT_KEY_F12;

    /* directional keys */
    static const int WLUT_KEY_LEFT = GLUT_KEY_LEFT;
    static const int WLUT_KEY_UP = GLUT_KEY_UP;
    static const int WLUT_KEY_RIGHT = GLUT_KEY_RIGHT;
    static const int WLUT_KEY_DOWN = GLUT_KEY_DOWN;
    static const int WLUT_KEY_PAGE_UP = GLUT_KEY_PAGE_UP;
    static const int WLUT_KEY_PAGE_DOWN = GLUT_KEY_PAGE_DOWN;
    static const int WLUT_KEY_HOME = GLUT_KEY_HOME;
    static const int WLUT_KEY_END = GLUT_KEY_END;
    static const int WLUT_KEY_INSERT = GLUT_KEY_INSERT;

    /* entry/exit callback state */
    static const int WLUT_LEFT = GLUT_LEFT;
    static const int WLUT_ENTERED = GLUT_ENTERED;

    /* menu usage callback state */
    static const int WLUT_MENU_NOT_IN_USE = GLUT_MENU_NOT_IN_USE;
    static const int WLUT_MENU_IN_USE = GLUT_MENU_IN_USE;

    /* visibility callback state */
    static const int WLUT_NOT_VISIBLE = GLUT_NOT_VISIBLE;
    static const int WLUT_VISIBLE = GLUT_VISIBLE;

    /* color index component selection values */
    static const int WLUT_RED = GLUT_RED;
    static const int WLUT_GREEN = GLUT_GREEN;
    static const int WLUT_BLUE = GLUT_BLUE;

    /* layers for use */
    static const int WLUT_NORMAL = GLUT_NORMAL;
    static const int WLUT_OVERLAY = GLUT_OVERLAY;

    /* glutGet parameters */
    static const int WLUT_WINDOW_X = GLUT_WINDOW_X;
    static const int WLUT_WINDOW_Y = GLUT_WINDOW_Y;
    static const int WLUT_WINDOW_WIDTH = GLUT_WINDOW_WIDTH;
    static const int WLUT_WINDOW_HEIGHT = GLUT_WINDOW_HEIGHT;
    static const int WLUT_WINDOW_BUFFER_SIZE = GLUT_WINDOW_BUFFER_SIZE;
    static const int WLUT_WINDOW_STENCIL_SIZE = GLUT_WINDOW_STENCIL_SIZE;
    static const int WLUT_WINDOW_DEPTH_SIZE = GLUT_WINDOW_DEPTH_SIZE;
    static const int WLUT_WINDOW_RED_SIZE = GLUT_WINDOW_RED_SIZE;
    static const int WLUT_WINDOW_GREEN_SIZE = GLUT_WINDOW_GREEN_SIZE;
    static const int WLUT_WINDOW_BLUE_SIZE = GLUT_WINDOW_BLUE_SIZE;
    static const int WLUT_WINDOW_ALPHA_SIZE = GLUT_WINDOW_ALPHA_SIZE;
    static const int WLUT_WINDOW_ACCUM_RED_SIZE = GLUT_WINDOW_ACCUM_RED_SIZE;
    static const int WLUT_WINDOW_ACCUM_GREEN_SIZE = GLUT_WINDOW_ACCUM_GREEN_SIZE;
    static const int WLUT_WINDOW_ACCUM_BLUE_SIZE = GLUT_WINDOW_ACCUM_BLUE_SIZE;
    static const int WLUT_WINDOW_ACCUM_ALPHA_SIZE = GLUT_WINDOW_ACCUM_ALPHA_SIZE;
    static const int WLUT_WINDOW_DOUBLEBUFFER = GLUT_WINDOW_DOUBLEBUFFER;
    static const int WLUT_WINDOW_RGBA = GLUT_WINDOW_RGBA;
    static const int WLUT_WINDOW_PARENT = GLUT_WINDOW_PARENT;
    static const int WLUT_WINDOW_NUM_CHILDREN = GLUT_WINDOW_NUM_CHILDREN;
    static const int WLUT_WINDOW_COLORMAP_SIZE = GLUT_WINDOW_COLORMAP_SIZE;
    static const int WLUT_WINDOW_NUM_SAMPLES = GLUT_WINDOW_NUM_SAMPLES;
    static const int WLUT_WINDOW_STEREO = GLUT_WINDOW_STEREO;
    static const int WLUT_WINDOW_CURSOR = GLUT_WINDOW_CURSOR;
    static const int WLUT_SCREEN_WIDTH = GLUT_SCREEN_WIDTH;
    static const int WLUT_SCREEN_HEIGHT = GLUT_SCREEN_HEIGHT;
    static const int WLUT_SCREEN_WIDTH_MM = GLUT_SCREEN_WIDTH_MM;
    static const int WLUT_SCREEN_HEIGHT_MM = GLUT_SCREEN_HEIGHT_MM;
    static const int WLUT_MENU_NUM_ITEMS = GLUT_MENU_NUM_ITEMS;
    static const int WLUT_DISPLAY_MODE_POSSIBLE = GLUT_DISPLAY_MODE_POSSIBLE;
    static const int WLUT_INIT_WINDOW_X = GLUT_INIT_WINDOW_X;
    static const int WLUT_INIT_WINDOW_Y = GLUT_INIT_WINDOW_Y;
    static const int WLUT_INIT_WINDOW_WIDTH = GLUT_INIT_WINDOW_WIDTH;
    static const int WLUT_INIT_WINDOW_HEIGHT = GLUT_INIT_WINDOW_HEIGHT;
    static const int WLUT_INIT_DISPLAY_MODE = GLUT_INIT_DISPLAY_MODE;
    static const int WLUT_ELAPSED_TIME = GLUT_ELAPSED_TIME;

    /* glutDeviceGet parameters */
    static const int WLUT_HAS_KEYBOARD = GLUT_HAS_KEYBOARD;
    static const int WLUT_HAS_MOUSE = GLUT_HAS_MOUSE;
    static const int WLUT_HAS_SPACEBALL = GLUT_HAS_SPACEBALL;
    static const int WLUT_HAS_DIAL_AND_BUTTON_BOX = GLUT_HAS_DIAL_AND_BUTTON_BOX;
    static const int WLUT_HAS_TABLET = GLUT_HAS_TABLET;
    static const int WLUT_NUM_MOUSE_BUTTONS = GLUT_NUM_MOUSE_BUTTONS;
    static const int WLUT_NUM_SPACEBALL_BUTTONS = GLUT_NUM_SPACEBALL_BUTTONS;
    static const int WLUT_NUM_BUTTON_BOX_BUTTONS = GLUT_NUM_BUTTON_BOX_BUTTONS;
    static const int WLUT_NUM_DIALS = GLUT_NUM_DIALS;
    static const int WLUT_NUM_TABLET_BUTTONS = GLUT_NUM_TABLET_BUTTONS;

    /* glutLayerGet parameters */
    static const int WLUT_OVERLAY_POSSIBLE = GLUT_OVERLAY_POSSIBLE;
    static const int WLUT_LAYER_IN_USE = GLUT_LAYER_IN_USE;
    static const int WLUT_HAS_OVERLAY = GLUT_HAS_OVERLAY;
    static const int WLUT_TRANSPARENT_INDEX = GLUT_TRANSPARENT_INDEX;
    static const int WLUT_NORMAL_DAMAGED = GLUT_NORMAL_DAMAGED;
    static const int WLUT_OVERLAY_DAMAGED = GLUT_OVERLAY_DAMAGED;

    /* glutGetModifiers return mask */
    static const int WLUT_ACTIVE_SHIFT = GLUT_ACTIVE_SHIFT;
    static const int WLUT_ACTIVE_CTRL = GLUT_ACTIVE_CTRL;
    static const int WLUT_ACTIVE_ALT = GLUT_ACTIVE_ALT;

    /* glutSetCursor parameters */
    /* Basic arrows */
    static const int WLUT_CURSOR_RIGHT_ARROW = GLUT_CURSOR_RIGHT_ARROW;
    static const int WLUT_CURSOR_LEFT_ARROW = GLUT_CURSOR_LEFT_ARROW;

    /* Symbolic cursor shapees */
    static const int WLUT_CURSOR_INFO = GLUT_CURSOR_INFO;
    static const int WLUT_CURSOR_DESTROY = GLUT_CURSOR_DESTROY;
    static const int WLUT_CURSOR_HELP = GLUT_CURSOR_HELP;
    static const int WLUT_CURSOR_CYCLE = GLUT_CURSOR_CYCLE;
    static const int WLUT_CURSOR_SPRAY = GLUT_CURSOR_SPRAY;
    static const int WLUT_CURSOR_WAIT = GLUT_CURSOR_WAIT;
    static const int WLUT_CURSOR_TEXT = GLUT_CURSOR_TEXT;
    static const int WLUT_CURSOR_CROSSHAIR = GLUT_CURSOR_CROSSHAIR;

    /* Directional cursors */
    static const int WLUT_CURSOR_UP_DOWN = GLUT_CURSOR_UP_DOWN;
    static const int WLUT_CURSOR_LEFT_RIGHT = GLUT_CURSOR_LEFT_RIGHT;

    /* Sizing cursors */
    static const int WLUT_CURSOR_TOP_SIDE = GLUT_CURSOR_TOP_SIDE;
    static const int WLUT_CURSOR_BOTTOM_SIDE = GLUT_CURSOR_BOTTOM_SIDE;
    static const int WLUT_CURSOR_LEFT_SIDE = GLUT_CURSOR_LEFT_SIDE;
    static const int WLUT_CURSOR_RIGHT_SIDE = GLUT_CURSOR_RIGHT_SIDE;
    static const int WLUT_CURSOR_TOP_LEFT_CORNER = GLUT_CURSOR_TOP_LEFT_CORNER;
    static const int WLUT_CURSOR_TOP_RIGHT_CORNER = GLUT_CURSOR_TOP_RIGHT_CORNER;
    static const int WLUT_CURSOR_BOTTOM_RIGHT_CORNER = GLUT_CURSOR_BOTTOM_RIGHT_CORNER;
    static const int WLUT_CURSOR_BOTTOM_LEFT_CORNER = GLUT_CURSOR_BOTTOM_LEFT_CORNER;

    /* Inherit from parent window */
    static const int WLUT_CURSOR_INHERIT = GLUT_CURSOR_INHERIT;

    /* Blank cursor */
    static const int WLUT_CURSOR_NONE = GLUT_CURSOR_NONE;

    /* Fullscreen crosshair {if available} */
    static const int WLUT_CURSOR_FULL_CROSSHAIR = GLUT_CURSOR_FULL_CROSSHAIR;

public:
    Wlut();
    ~Wlut();
    void Init(int *argcp, char **argv);
    void InitWindowSize(int width, int height);
    void InitWindowPosition(int x, int y);
    void InitDisplayMode(unsigned int mode);
    void MainLoop();
    int CreateWindow(char *name);
    int CreateSubWindow(int win, int x, int y, int width, int height);
    void SetWindow(int win);
    int GetWindow();
    void DestroyWindow(int win);
    void PostRedisplay();
    void SwapBuffers();
    void PositionWindow(int x, int y);
    void ReshapeWindow(int width, int height);
    void FullScreen();
    void PopWindow();
    void PushWindow();
    void ShowWindow();
    void HideWindow();
    void IconifyWindow();
    void SetWindowTitle(char *name);
    void SetIconTitle(char *name);
    void SetCursor(int cursor);
    void EstablishOverlay();
    void UseLayer(GLenum layer);
    void RemoveOverlay();
    void PostOverlayRedisplay();
    void ShowOverlay();
    void HideOverlay();
    int CreateMenu(void (*func)(int value));
    void SetMenu(int menu);
    int GetMenu();
    void DestroyMenu(int menu);
    void AddMenuEntry(char *name, int value);
    void AddSubMenu(char *name, int menu);
    void ChangeToMenuEntry(int entry, char *name, int value);
    void ChangeToSubMenu(int entry, char *name, int menu);
    void RemoveMenuItem(int entry);
    void AttachMenu(int button);
    void DetachMenu(int button);
    void DisplayFunc(void (*func)(void));
    void OverlayDisplayFunc(void (*func)(void));
    void ReshapeFunc(void (*func)(int width, int height));
    void KeyboardFunc(void (*func)(unsigned char key, int x, int y));
    void MouseFunc(void (*func)(int button, int state, int x, int y));
    void MotionFunc(void (*func)(int x, int y));
    void PassiveMotionFunc(void (*func)(int x, int y));
    void VisibilityFunc(void (*func)(int state));
    void EntryFunc(void (*func)(int state));
    void SpecialFunc(void (*func)(int key, int x, int y));
    void SpaceballMotionFunc(void (*func)(int x, int y, int z));
    void SpaceballRotateFunc(void (*func)(int x, int y, int z));
    void SpaceballButtonFunc(void (*func)(int button, int state));
    void ButtonBoxFunc(void (*func)(int button, int state));
    void DialsFunc(void (*func)(int dial, int value));
    void TabletMotionFunc(void (*func)(int x, int y));
    void TabletButtonFunc(void (*func)(int button, int state, int x, int y));
    void MenuStatusFunc(void (*func)(int status, int x, int y));
    void MenuStateFunc(void (*func)(int status));
    void IdleFunc(void (*func)(void));
    void TimerFunc(unsigned int msecs, void (*func)(int value), int value);
    void SetColor(int cell, GLfloat red, GLfloat green, GLfloat blue);
    GLfloat GetColor(int cell, int component);
    void CopyColormap(int win);
    int Get(GLenum state);
    int LayerGet(GLenum info);
    int DeviceGet(GLenum info);
    int GetModifiers();
    int ExtensionSupported(char *extension);
    void BitmapCharacter(void *font, int character);
    int BitmapWidth(void *font, int character);
    void StrokeCharacter(void *font, int character);
    int StrokeWidth(void *font, int character);
    void SolidSphere(GLdouble radius, GLint slices, GLint stacks);
    void WireSphere(GLdouble radius, GLint slices, GLint stacks);
    void SolidCube(GLdouble size);
    void WireCube(GLdouble size);
    void SolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
    void WireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
    void SolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
    void WireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
    void SolidDodecahedron();
    void WireDodecahedron();
    void SolidOctahedron();
    void WireOctahedron();
    void SolidTetrahedron();
    void WireTetrahedron();
    void SolidIcosahedron();
    void WireIcosahedron();
    void SolidTeapot(GLdouble size);
    void WireTeapot(GLdouble size);
};
#endif