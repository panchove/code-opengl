#include <iostream>

#include "GL/freeglut.h"
#include "GL/gl.h"

class Glut
{
private:
    /* GLUT display mode bit masks */
    static int GLUT_RGBA = GLUT_RGBA;
    static int GLUT_RGB = GLUT_RGB;
    static int GLUT_INDEX = GLUT_INDEX;
    static int GLUT_SINGLE = GLUT_SINGLE;
    static int GLUT_DOUBLE = GLUT_DOUBLE;
    static int GLUT_ACCUM = GLUT_ACCUM;
    static int GLUT_ALPHA = GLUT_ALPHA;
    static int GLUT_DEPTH = GLUT_DEPTH;
    static int GLUT_STENCIL = GLUT_STENCIL;
    static int GLUT_MULTISAMPLE = GLUT_MULTISAMPLE;
    static int GLUT_STEREO = GLUT_STEREO;
    static int GLUT_LUMINANCE = GLUT_LUMINANCE;

public:
    Glut();
    ~Glut();
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
    void SpaceballButtonFunc(func(int button, int state));
    void ButtonBoxFunc(void (*func)(int button, int state));
    void DialsFunc(void (*func)(int dial, int value));
    void TabletMotionFunc(void (*func)(int x, int y));
    void TabletButtonFunc(void (*func)(int button, int state, int x, int y));
    void MenuStatusFunc(void (*func)(int status, int x, int y));
    void MenuStateFunc(void (*func)(int status));
    void IdleFunc(void (*func)(void));
    void SetColor(int cell, GLfloat red, GLfloat green, GLfloat blue);
    GLfloat GetColor(int cell, int component);
    void CopyColormap(int win);
    int Get(GLenum state);
    int LayerGet(GLenum info);
    int DeviceGet(GLenum info);
    int GetModifiers();
    int ExtensionSupported(char *extension);
    void BitmapCharacter(void *font, int character);
    int BitmapWidth(GLUTbitmapFont font, int character);
    void StrokeCharacter(void *font, int character);
    int StrokeWidth(GLUTstrokeFont font, int character);
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

/// @brief Constructor
Glut::Glut()
{
}

/// @brief Destructor
Glut::~Glut()
{
}

/***
 *   INITIALIZATION
 *   ==============
 *
 *   Routines beginning with the glutInit- prefix are used to initialize GLUT state.
 *   The primary initialization routine is glutInit that should only be called exactly
 *   once in a GLUT program. No non- glutInit- prefixed GLUT or OpenGL routines should
 *   be called before glutInit.
 *
 *   The other glutInit- routines may be called before glutInit.
 *   The reason is these routines can be used to set default window initialization
 *   state that might be modified by the command processing done in glutInit.
 *   For example, glutInitWindowSize(400, 400)  can be called before glutInit to
 *   indicate 400 by 400 is the program's default window size. Setting the initial
 *   window size or position before glutInit allows the GLUT program user to specify
 *   the initial size or position using command line arguments.
 */

/// @brief is used to initialize the GLUT library.
/// @param argcp A pointer to the program's unmodified argc variable from main. Upon return, the value pointed to by argcp will be updated, because glutInit extracts any command line options intended for the GLUT library.
/// @param argv The program's unmodified argv variable from main. Like argcp, the data for argv will be updated because glutInit extracts any command line options understood by the GLUT library.
void Glut::Init(int *argcp, char **argv)
{
    glutInit(argcp, argv)
}

/// @brief Window size
/// @param width Width in pixels.
/// @param height Height in pixels.
void Glut::InitWindowSize(int width, int height)
{
    glutInitWindowSize(width, height);
}

/// @brief Window position
/// @param x Window X location in pixels.
/// @param y Window y location in pixels.
void Glut::InitWindowPosition(int x, int y)
{
    glutInitWindowPosition(x, y);
}

/// @brief Sets the initial display mode.
/// @param mode Display mode, normally the bitwise OR-ing of GLUT display mode bit masks.
void Glut::InitDisplayMode(unsigned int mode)
{
    glutInitDisplayMode(mode);
}

/*
 *   BEGINNING EVENT PROCESSING
 *   ==========================
 *
 *   After a GLUT program has done initial setup such as creating windows and menus,
 *   GLUT programs enter the GLUT event processing loop by calling glutMainLoop.
 */

/// @brief Enters the GLUT event processing loop.
void Glut::MainLoop()
{
    glutMainLoop();
}

/*
 *   Window Management
 *   =================
 *
 *   GLUT supports two types of windows: top-level windows and subwindows.
 *   Both types support OpenGL rendering and GLUT callbacks. There is a single
 *   identifier space for both types of windows.
 */

/// @brief Creates a top-level window.
/// @param name ASCII character string for use as window name.
/// @return The value returned is a unique small integer identifier for the window.
///         The range of allocated identifiers starts at one.
//          This window identifier can be used when calling glutSetWindow.
int Glut::CreateWindow(char *name)
{
    int handle = CreateWindow(name);
    return handle;
}

/// @brief
/// @param win Identifier of the subwindow's parent window.
/// @param x Window X location in pixels relative to parent window's origin.
/// @param y Window Y location in pixels relative to parent window's origin.
/// @param width Width in pixels.
/// @param height Height in pixels.
/// @return The value returned is a unique small integer identifier for the window.
///         The range of allocated identifiers starts at one
int Glut::CreateSubWindow(int win, int x, int y, int width, int height)
{
    int handler = glutCreateSubWindow(win, x, y, width, height);
    return handler;
}

/// @brief sets the current window
/// @param win Identifier of GLUT window to make the current window.
void Glut::SetWindow(int win)
{
    glutSetWindow(win);
}
/// @brief returns the identifier of the current window
/// @return handler window
int Glut::GetWindow()
{
    int handler = glutGetWindow();
    return handler;
}

/// @brief Destroys the specified window.
/// @param win Identifier of GLUT window to destroy.
void Glut::DestroyWindow(int win)
{
    glutDestroyWindow(win);
}

/// @brief Marks the current window as needing to be redisplayed.
void Glut::PostRedisplay()
{
    void glutPostRedisplay();
}

/// @brief Swaps the buffers of the current window if double buffered.
/// @param
void Glut::SwapBuffers()
{
    void glutSwapBuffers();
}

/// @brief Requests a change to the position of the current window.
/// @param x New X location of window in pixels.
/// @param y New Y location of window in pixels.
void Glut::PositionWindow(int x, int y)
{
    glutPositionWindow(x, y);
}

/// @brief Requests a change to the size of the current window.
/// @param width New width of window in pixels.
/// @param height New height of window in pixels.
void Glut::ReshapeWindow(int width, int height)
{
    glutReshapeWindow(width, height);
}

/// @brief requests that the current window be made full screen.
void Glut::FullScreen()
{
    glutFullScreen();
}

/// @brief change the stacking order of the current window relative to its siblings.
void Glut::PopWindow()
{
    glutPopWindow();
}

/// @brief change the stacking order of the current window relative to its siblings.
void Glut::PushWindow()
{
    glutPushWindow();
}

/// @brief Change the display status of the current window.
void Glut::ShowWindow()
{
    glutShowWindow();
}
/// @brief Change the display status of the current window.
void Glut::HideWindow()
{
    glutHideWindow();
}
/// @brief Change the display status of the current window.
void Glut::IconifyWindow()
{
    glutIconifyWindow();
}

/// @brief change the window respectively of the current top-level window.
/// @param name ASCII character string for the window or icon name to be set for the window.
void Glut::SetWindowTitle(char *name)
{
    glutSetWindowTitle(name);
}
/// @brief change icon title respectively of the current top-level window.
/// @param name ASCII character string for the window or icon name to be set for the window.
void Glut::SetIconTitle(char *name)
{
    glutSetIconTitle(name);
}

/// @brief Changes the cursor image of the current window.
/// @param cursor Name of cursor image to change to.
void Glut::SetCursor(int cursor)
{
    glutSetCursor(cursor);
}

/*
 *   OVERLAY MANAGEMENT
 *   ==================
 *
 *   When  overlay hardware is available, GLUT provides a set of routine for establishing,
 *   using, and removing an overlay for GLUT windows. When an overlay is established,
 *   a separate OpenGL context is also established. A window's overlay OpenGL state is
 *   kept distinct from the normal planes OpenGL state.
 */

/// @brief Establishes an overlay (if possible) for the current window.
void Glut::EstablishOverlay()
{
    glutEstablishOverlay();
}

/// @brief Changes the layer in use for the current window.
/// @param layer Either GLUT_NORMAL or GLUT_OVERLAY, selecting the normal plane or
///        overlay respectively.
void Glut::UseLayer(GLenum layer)
{
    glutUseLayer(layer);
}

/// @brief removes the overlay (if one exists) from the current window.
void Glut::RemoveOverlay()
{
    glutRemoveOverlay();
}

/// @brief marks the overlay of the current window as needing to be redisplayed.
void Glut::PostOverlayRedisplay()
{
    glutPostOverlayRedisplay();
}

/// @brief shows the overlay of the current window
void Glut::ShowOverlay()
{
    glutShowOverlay();
}

/// @brief hides the overlay of the current window
void Glut::HideOverlay()
{
    glutHideOverlay();
}

/*
 *   MENU MANAGEMENT
 *   ===============
 *
 *   GLUT supports simple cascading pop-up menus.
 *   They are designed to let a user select various modes within a program.
 *   The functionality is simple and minimalistic and is meant to be that way.
 *   Do not mistake GLUT's pop-up menu facility with an attempt to create a full-featured
 *   user interface.
 *
 *   It is illegal to create or destroy menus, or change, add, or remove menu items
 *   while a menu (and any cascaded sub-menus) are in use (that is, popped up).
 */

/// @brief Creates a new pop-up menu.
/// @param func The callback function for the menu that is called when a menu entry from the menu is selected. The value passed to the callback is determined by the value for the selected menu entry.
/// @return menu handler
int Glut::CreateMenu(void (*func)(int value))
{
    int glutCreateMenu(func(value));
}

/// @brief Sets the current menu
/// @param menu The identifier of the menu to make the current menu.
void Glut::SetMenu(int menu)
{
    glutSetMenu(menu);
}

/// @brief returns the identifier of the current menu.
/// @return menu identifier
int Glut::GetMenu()
{
    int handler = glutGetMenu();
    return handler;
}

/// @brief Destroys the specified menu.
/// @param menu The identifier of the menu to destroy.
void Glut::DestroyMenu(int menu)
{
    glutDestroyMenu(menu);
}

/// @brief Adds a menu entry to the bottom of the current menu.
/// @param name ASCII character string to display in the menu entry.
/// @param value Value to return to the menu's callback function if the menu entry is selected.
void Glut::AddMenuEntry(char *name, int value)
{
    glutAddMenuEntry(name, value);
}

/// @brief Adds a sub-menu trigger to the bottom of the current menu.
/// @param name ASCII character string to display in the menu item from which to cascade the sub-menu.
/// @param menu Identifier of the menu to cascade from this sub-menu menu item.
void Glut::AddSubMenu(char *name, int menu)
{
    glutAddSubMenu(name, menu);
}

/// @brief Changes the specified menu item in the current menu into a menu entry.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
/// @param name ASCII character string to display in the menu entry.
/// @param value Value to return to the menu's callback function if the menu entry is selected.
void Glut::ChangeToMenuEntry(int entry, char *name, int value)
{
    glutChangeToMenuEntry(entry, name, value);
}

/// @brief Changes the specified menu item in the current menu into a sub-menu trigger.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
/// @param name
/// @param menu
void Glut::ChangeToSubMenu(int entry, char *name, int menu)
{
    glutChangeToSubMenu(entry, name, menu);
}

/// @brief remove the specified menu item.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
void Glut::RemoveMenuItem(int entry)
{
    glutRemoveMenuItem(entry);
}

/// @brief Attaches a mouse button for the current window to the identifier of the current menu.
/// @param button The button to attach a menu.
void Glut::AttachMenu(int button)
{
    glutAttachMenu(button);
}
/// @brief Detaches an attached mouse button from the current window.
/// @param button The button to detach a menu,
void Glut::DetachMenu(int button)
{
    glutDetachMenu(button);
}

/*
 *  CALLBACK REGISTRATION
 *  =====================
 *
 *  GLUT supports a number of callbacks to respond to events. There are three types of callbacks:
 *  window, menu, and global. Window callbacks indicate when to redisplay or reshape a window,
 *  when the visibility of the window changes, and when input is available for the window.
 *  The menu callback is set by the glutCreateMenu call described already. The global callbacks
 *  manage the passing of time and menu usage. The calling order of callbacks
 *  between different windows is undefined.
 *
 *  Callbacks for input events should be delivered to the window the event occurs in.
 *  Events should not propagate to parent windows.
 */

/// @brief Sets the display callback for the current window.
/// @param func The new display callback function.
void Glut::DisplayFunc(void (*func)(void))
{
    glutDisplayFunc(func());
}

/// @brief Sets the overlay display callback for the current window.
/// @param func The new overlay display callback function.
void Glut::OverlayDisplayFunc(void (*func)(void))
{
    glutOverlayDisplayFunc(func());
}

/// @brief Sets the reshape callback for the current window.
/// @param func The new reshape callback function.
void Glut::ReshapeFunc(void (*func)(int width, int height))
{
    glutReshapeFunc(func(width, height));
};

/// @brief  Sets the keyboard callback for the current window.
/// @param func The new keyboard callback function.
void Glut::KeyboardFunc(void (*func)(unsigned char key, int x, int y))
{
    glutKeyboardFunc(func(key, x, y));
}

/// @brief sets the mouse callback for the current window.
/// @param func The new mouse callback function.
void Glut::MouseFunc(void (*func)(int button, int state, int x, int y))
{
    glutMouseFunc(func(button, state, x, y));
}

/// @brief Set the motion callback respectively for the current window.
/// @param func The new motion callback function.
void Glut::MotionFunc(void (*func)(int x, int y))
{
    glutMotionFunc(func(x, y));
}

/// @brief Set the passive motion callback respectively for the current window.
/// @param func The new passive motion callback function.
void Glut::PassiveMotionFunc(void (*func)(int x, int y))
{
    glutPassiveMotionFunc(func(x, y));
}

/// @brief Sets the visibility callback for the current window.
/// @param func sets the visibility callback for the current window.
void Glut::VisibilityFunc(void (*func)(int state))
{
    glutVisibilityFunc(func(state));
}

/// @brief Sets the mouse enter/leave callback for the current window.
/// @param func The new entry callback function.
void Glut::EntryFunc(void (*func)(int state))
{
    glutEntryFunc(func(state));
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Glut::SpecialFunc(void (*func)(int key, int x, int y))
{
    glutSpecialFunc(func(key, x, y));
}

/// @brief Sets the Spaceball motion callback for the current window.
/// @param func The new entry callback function.
void Glut::SpaceballMotionFunc(void (*func)(int x, int y, int z))
{
    glutSpaceballMotionFunc(func(x, y, z));
}

/// @brief Sets the Spaceball rotation callback for the current window.
/// @param func The new entry callback function.
void Glut::SpaceballRotateFunc(void (*func)(int x, int y, int z))
{
    glutSpaceballRotateFunc(func(x, y, z));
}

/// @brief Sets the Spaceball button callback for the current window.
/// @param func The new entry callback function
void Glut::SpaceballButtonFunc(func(int button, int state))
{
    glutSpaceballButtonFunc(func)(button, state));
}

/// @brief Sets the dial & button box button callback for the current window.
/// @param func The new entry callback function.
void Glut::ButtonBoxFunc(void (*func)(int button, int state))
{
    glutButtonBoxFunc(func(button, state));
}

/// @brief Sets the dial & button box dials callback for the current window.
/// @param func The new entry callback function.
void Glut::DialsFunc(void (*func)(int dial, int value))
{
    glutDialsFunc(func(dial, value));
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Glut::TabletMotionFunc(void (*func)(int x, int y))
{
    glutTabletMotionFunc(func(x, y));
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Glut::TabletButtonFunc(void (*func)(int button, int state, int x, int y))
{
    glutTabletButtonFunc(func(button, state, x, y));
}

/// @brief Sets the global menu status callback.
/// @param func The new entry callback function.
void Glut::MenuStatusFunc(void (*func)(int status, int x, int y))
{
    glutMenuStatusFunc(func(status, x, y));
}

/// @brief Sets the global menu status callback.
/// @param func The new entry callback function.
void Glut::MenuStateFunc(void (*func)(int status))
{
    glutMenuStateFunc(func(status));
}

/// @brief Sets the global idle callback.
/// @param func The new entry callback function.
void Glut::IdleFunc(void (*func)(void))
{
    glutIdleFunc(func());
}

void Glut::TimerFunc(unsigned int msecs, void (*func)(int value), value)
{
    glutTimerFunc(msecs, func(value), value);
}

/*
 *  COLOR INDEX COLOEMAP MANAGEMENT
 *  ===============================
 *
 *  OpenGL supports both RGBA and color index rendering. The RGBA mode is generally preferable
 *  to color index because more OpenGL rendering capabilities are available and color index
 *  mode requires the loading of colormap entries.
 *
 *  The GLUT color index routines are used to write and read entries in a window's color index
 *  colormap. Every GLUT color index window has its own logical color index colormap. The size
 *  of a window's colormap can be determined by calling glutGet(GLUT_WINDOW_COLORMAP_SIZE).
 *
 *  GLUT color index windows within a program can attempt to share colormap resources by copying
 *  a single color index colormap to multiple windows using glutCopyColormap. If possible GLUT
 *  will attempt to share the actual colormap. While copying colormaps using glutCopyColormap
 *  can potentially allow sharing of physical colormap resources, logically each window has its
 *  own colormap. So changing a copied colormap of a window will force the duplication of the
 *  colormap. For this reason, color index programs should generally load a single color index colormap, copy it to all color index windows within the program, and then not modify any colormap cells.
 *
 *  Use of multiple colormaps is likely to result in colormap installation problems where some
 *  windows are displayed with an incorrect colormap due to limitations on colormap resources.
 */

/// @brief Sets the color of a colormap entry in the layer of use for the current window.
/// @param cell Color cell index (starting at zero).
/// @param red Red intensity (clamped between 0.0 and 1.0 inclusive).
/// @param green Green intensity (clamped between 0.0 and 1.0 inclusive).
/// @param blue Blue intensity (clamped between 0.0 and 1.0 inclusive).
void Glut::SetColor(int cell, GLfloat red, GLfloat green, GLfloat blue)
{
    glutSetColor(int cell, GLfloat red, GLfloat green, GLfloat blue);
}

/// @brief Retrieves a red, green, or blue component for a given color index colormap entry for the layer in use's logical colormap for the current window.
/// @param cell Color cell index (starting at zero).
/// @param component One of GLUT_RED, GLUT_GREEN, or GLUT_BLUE.
/// @return GLfloat is a floating point value between 0.0 and 1.0 inclusive.
GLfloat Glut::GetColor(int cell, int component)
{
    GLfloat value = glutGetColor(cell, component);
    return value;
}

/// @brief copies the logical colormap for the layer in use from a specified window to the current window.
/// @param win The identifier of the window to copy the logical colormap from.
void Glut::CopyColormap(int win)
{
    glutCopyColormap(win);
}

/*
 * STATE RETRIEVAl
 * ===============
 *
 * GLUT maintains a considerable amount of programmer visible state. Some (but not all) of
 * this state may be directly retrieved.
 */

/// @brief Retrieves simple GLUT state represented by integers.
/// @param state Name of state to retrieve.
/// @return int simple GLUT state represented by integers
int Glut::Get(GLenum state)
{
    int value = glutGet(state);
    return value;
}

/// @brief Retrieves GLUT state pertaining to the layers of the current window.
/// @param info Name of device information to retrieve.
/// @return int GLUT layer information for the current window represented by integers
int Glut::LayerGet(GLenum info)
{
    int value = glutLayerGet(info);
    return value;
}

/// @brief Retrieves GLUT device information represented by integers.
/// @param info Name of device information to retrieve.
/// @return int GLUT device information represented by integers.
int Glut::DeviceGet(GLenum info)
{
    int value = glutDeviceGet(info);
    return value;
}

/// @brief returns the modifier key state when certain callbacks were generated.
/// @return int the modifier key state at the time the input event for a keyboard, special, or mouse callback is generated
int Glut::GetModifiers()
{
    int value = glutGetModifiers();
}

/// @brief helps to easily determine whether a given OpenGL extension is supported.
/// @param extension Name of OpenGL extension.
/// @return int  non-zero if the extension is supported, zero if not supported.
int Glut::ExtensionSupported(char *extension)
{
    int value = glutExtensionSupported(extension);
    return value;
}

/*
 * FONT RENDERING
 * ==============
 *
 * GLUT supports two type of font rendering: stroke fonts, meaning each character is rendered
 * as a set of line segments; and bitmap fonts, where each character is a bitmap generated
 * with glBitmap. Stroke fonts have the advantage that because they are geometry, they can be
 * arbitrarily scale and rendered. Bitmap fonts are less flexible since they are rendered as
 * bitmaps but are usually faster than stroke fonts.
 */

/// @brief Renders a bitmap character using OpenGL.
/// @param font Bitmap font to use.
/// @param character Character to render (not confined to 8 bits).
void Glut::BitmapCharacter(void *font, int character)
{
    glutBitmapCharacter(font, character);
}

/// @brief Returns the width of a bitmap character.
/// @param font Bitmap font to use.
/// @param character Character to return width of (not confined to 8 bits).
/// @return int returns the width in pixels of a bitmap character in a supported bitmap font
int Glut::BitmapWidth(GLUTbitmapFont font, int character)
{
    int value = glutBitmapWidth(font, character);
    return value;
}

/// @brief Renders a stroke character using OpenGL.
/// @param font Stroke font to use.
/// @param character Character to render (not confined to 8 bits).
void Glut::StrokeCharacter(void *font, int character)
{
    glutStrokeCharacter(font, character);
}

/// @brief Returns the width of a stroke character.
/// @param font troke font to use.
/// @param character Character to return width of (not confined to 8 bits)
/// @return the width in pixels of a stroke character in a supported stroke font.
int Glut::StrokeWidth(GLUTstrokeFont font, int character)
{
    int value = glutStrokeWidth(font, character);
    return value;
}

/*
 *  Geometric Object Rendering
 *  ==========================
 *
 *  GLUT includes a number of routines for generating easily recognizable 3D geometric objects.
 *  These routines reflect functionality available in the aux toolkit described in the OpenGL
 *  Programmer's Guide and are included in GLUT to allow the construction of simple GLUT
 *  programs that render recognizable objects. These routines can be implemented as pure OpenGL
 *  rendering routines. The routines do not generate display lists for the objects they create.
 *
 *  The routines generate normals appropriate for lighting but do not generate texture coordinates
 *  (except for the teapot).
 */

/// @brief Render a solid sphere respectively.
/// @param radius The radius of the sphere.
/// @param slices The number of subdivisions around the Z axis (similar to lines of longitude).
/// @param stacks The number of subdivisions along the Z axis (similar to lines of latitude).
void Glut::SolidSphere(GLdouble radius, GLint slices, GLint stacks)
{
    glutSolidSphere(radius, slices, stacks);
}

/// @brief render a wireframe sphere respectively.
/// @param radius The radius of the sphere.
/// @param slices The number of subdivisions around the Z axis (similar to lines of longitude).
/// @param stacks The number of subdivisions along the Z axis (similar to lines of latitude).
void Glut::WireSphere(GLdouble radius, GLint slices, GLint stacks)
{
    glutWireSphere(radius, slices, stacks);
}

/// @brief Render a solid cube respectively.
/// @param size The size of the cube.
void Glut::SolidCube(GLdouble size)
{
    glutSolidCube(size);
}
/// @brief Render a wireframe cube respectively.
/// @param size The size of the cube.
void Glut::WireCube(GLdouble size)
{
    glutWireCube(size);
}

/// @brief Render a solid cone respectively.
/// @param base
/// @param height
/// @param slices
/// @param stacks
void Glut::SolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
    glutSolidCone(base, height, slices, stacks);
}
/// @brief Render a wireframe cone respectively.
/// @param base The radius of the base of the cone.
/// @param height The height of the cone.
/// @param slices The number of subdivisions around the Z axis.
/// @param stacks The number of subdivisions along the Z axis.
void Glut::WireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
    glutWireCone(base, height, slices, stacks);
}

/// @brief Render a solid torus (doughnut) respectively.
/// @param innerRadius Inner radius of the torus.
/// @param outerRadius Outer radius of the torus.
/// @param nsides Number of sides for each radial section.
/// @param rings Number of radial divisions for the torus.
void Glut::SolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings)
{
    glutSolidTorus(innerRadius, outerRadius, nsides, rings);
}

/// @brief Render a wireframe torus (doughnut) respectively.
/// @param innerRadius Inner radius of the torus.
/// @param outerRadius Outer radius of the torus.
/// @param nsides Number of sides for each radial section.
/// @param rings Number of radial divisions for the torus.
void Glut::WireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings)
{
    void glutWireTorus(innerRadius, outerRadius, nsides, rings);
}

/// @brief Render a solid dodecahedron (12-sided regular solid) respectively.
void Glut::SolidDodecahedron()
{
    glutSolidDodecahedron();
}

/// @brief Render a wireframe dodecahedron (12-sided regular solid) respectively.
void Glut::WireDodecahedron()
{
    glutWireDodecahedron();
}

/// @brief Render a solid octahedron (8-sided regular solid) respectively.
void Glut::SolidOctahedron()
{
    glutSolidOctahedron();
}

/// @brief Render a wireframe octahedron (8-sided regular solid) respectively.
void Glut::WireOctahedron()
{
    glutWireOctahedron();
}

/// @brief Render a solid tetrahedron (4-sided regular solid) respectively.
void Glut::SolidTetrahedron()
{
    glutSolidTetrahedron();
}
/// @brief render a wireframe tetrahedron (4-sided regular solid) respectively.
void Glut::WireTetrahedron()
{
    glutWireTetrahedron();
}

/// @brief Render a solid icosahedron (20-sided regular solid) respectively.
void Glut::SolidIcosahedron()
{
    glutSolidIcosahedron();
}

/// @brief Render a wireframe icosahedron (20-sided regular solid) respectively.
void Glut::WireIcosahedron()
{
    glutWireIcosahedron();
}

/// @brief Render a solid teapotgif respectively.
/// @param size Relative size of the teapot.
void Glut::SolidTeapot(GLdouble size)
{
    glutSolidTeapot(size);
}
/// @brief Render a wireframe teapotgif respectively.
/// @param size Relative size of the teapot.
void Glut::WireTeapot(GLdouble size)
{
    glutWireTeapot(size);
}