/**
 *  OpenGL is a trademark of Silicon Graphics, Inc. X Window System is a trademark of X Consortium,
 *  Inc. Spaceball is a registered trademark of Spatial Systems Inc.
 *
 *  The author has taken care in preparation of this documentation but makes no expressed or
 *  implied warranty of any kind and assumes no responsibility for errors or omissions.
 *  No liability is assumed for incidental or consequential damages in connection with or arising
 *  from the use of information or programs contained herein.
 */

/// @brief Wrapper class for GLUT
/// @author Francisco Prado
/// @copyright 2023
#include "wlut.hpp"
/// @brief Constructor
Wlut::Wlut()
{
}

/// @brief Destructor
Wlut::~Wlut()
{
}

/***
 *   INITIALIZATION
 *   ==============
 *
 *   Routines beginning with the GlutInit- prefix are used to initialize glut state.
 *   The primary initialization routine is GlutInit that should only be called exactly
 *   once in a Glut program. No non- WlutInit- prefixed Wlut or OpenGL routines should
 *   be called before WlutInit.
 *
 *   The other GlutInit- routines may be called before GlutInit.
 *   The reason is these routines can be used to set default window initialization
 *   state that might be modified by the command processing done in GlutInit.
 *   For example, GlutInitWindowSize(400, 400)  can be called before GlutInit to
 *   indicate 400 by 400 is the program's default window size. Setting the initial
 *   window size or position before GlutInit allows the Glut program user to specify
 *   the initial size or position using command line arguments.
 */

/// @brief is used to initialize the Glut library.
/// @param argcp A pointer to the program's unmodified argc variable from main. Upon return, the value pointed to by argcp will be updated, because WlutInit extracts any command line options intended for the Wlut library.
/// @param argv The program's unmodified argv variable from main. Like argcp, the data for argv will be updated because WlutInit extracts any command line options understood by the Wlut library.

void Wlut::Init(int *argcp, char **argv)
{
    glutInit(argcp, argv);
}

/// @brief Window size
/// @param width Width in pixels.
/// @param height Height in pixels.
void Wlut::InitWindowSize(int width, int height)
{
    glutInitWindowSize(width, height);
}

/// @brief Window position
/// @param x Window X location in pixels.
/// @param y Window y location in pixels.
void Wlut::InitWindowPosition(int x, int y)
{
    glutInitWindowPosition(x, y);
}

/// @brief Sets the initial display mode.
/// @param mode Display mode, normally the bitwise OR-ing of Wlut display mode bit masks.
void Wlut::InitDisplayMode(unsigned int mode)
{
    glutInitDisplayMode(mode);
}

/*
 *   BEGINNING EVENT PROCESSING
 *   ==========================
 *
 *   After a Wlut program has done initial setup such as creating windows and menus,
 *   Wlut programs enter the Wlut event processing loop by calling WlutMainLoop.
 */

/// @brief Enters the Wlut event processing loop.
void Wlut::MainLoop()
{
    glutMainLoop();
}

/*
 *   Window Management
 *   =================
 *
 *   Wlut supports two types of windows: top-level windows and subwindows.
 *   Both types support OpenGL rendering and Wlut callbacks. There is a single
 *   identifier space for both types of windows.
 */

/// @brief Creates a top-level window.
/// @param name ASCII character string for use as window name.
/// @return The value returned is a unique small integer identifier for the window.
///         The range of allocated identifiers starts at one.
///          This window identifier can be used when calling WlutSetWindow.
int Wlut::CreateWindow(char *name)
{
    int handle = glutCreateWindow(name);
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
int Wlut::CreateSubWindow(int win, int x, int y, int width, int height)
{
    int handler = glutCreateSubWindow(win, x, y, width, height);
    return handler;
}

/// @brief sets the current window
/// @param win Identifier of Wlut window to make the current window.
void Wlut::SetWindow(int win)
{
    glutSetWindow(win);
}
/// @brief returns the identifier of the current window
/// @return handler window
int Wlut::GetWindow()
{
    int handler = glutGetWindow();
    return handler;
}

/// @brief Destroys the specified window.
/// @param win Identifier of Wlut window to destroy.
void Wlut::DestroyWindow(int win)
{
    glutDestroyWindow(win);
}

/// @brief Marks the current window as needing to be redisplayed.
void Wlut::PostRedisplay()
{
    void glutPostRedisplay();
}

/// @brief Swaps the buffers of the current window if double buffered.
/// @param
void Wlut::SwapBuffers()
{
    void glutSwapBuffers();
}

/// @brief Requests a change to the position of the current window.
/// @param x New X location of window in pixels.
/// @param y New Y location of window in pixels.
void Wlut::PositionWindow(int x, int y)
{
    glutPositionWindow(x, y);
}

/// @brief Requests a change to the size of the current window.
/// @param width New width of window in pixels.
/// @param height New height of window in pixels.
void Wlut::ReshapeWindow(int width, int height)
{
    glutReshapeWindow(width, height);
}

/// @brief requests that the current window be made full screen.
void Wlut::FullScreen()
{
    glutFullScreen();
}

/// @brief change the stacking order of the current window relative to its siblings.
void Wlut::PopWindow()
{
    glutPopWindow();
}

/// @brief change the stacking order of the current window relative to its siblings.
void Wlut::PushWindow()
{
    glutPushWindow();
}

/// @brief Change the display status of the current window.
void Wlut::ShowWindow()
{
    glutShowWindow();
}
/// @brief Change the display status of the current window.
void Wlut::HideWindow()
{
    glutHideWindow();
}
/// @brief Change the display status of the current window.
void Wlut::IconifyWindow()
{
    glutIconifyWindow();
}

/// @brief change the window respectively of the current top-level window.
/// @param name ASCII character string for the window or icon name to be set for the window.
void Wlut::SetWindowTitle(char *name)
{
    glutSetWindowTitle(name);
}
/// @brief change icon title respectively of the current top-level window.
/// @param name ASCII character string for the window or icon name to be set for the window.
void Wlut::SetIconTitle(char *name)
{
    glutSetIconTitle(name);
}

/// @brief Changes the cursor image of the current window.
/// @param cursor Name of cursor image to change to.
void Wlut::SetCursor(int cursor)
{
    glutSetCursor(cursor);
}

/*
 *   OVERLAY MANAGEMENT
 *   ==================
 *
 *   When  overlay hardware is available, Wlut provides a set of routine for establishing,
 *   using, and removing an overlay for Wlut windows. When an overlay is established,
 *   a separate OpenGL context is also established. A window's overlay OpenGL state is
 *   kept distinct from the normal planes OpenGL state.
 */

/// @brief Establishes an overlay (if possible) for the current window.
void Wlut::EstablishOverlay()
{
    glutEstablishOverlay();
}

/// @brief Changes the layer in use for the current window.
/// @param layer Either Wlut_NORMAL or Wlut_OVERLAY, selecting the normal plane or
///        overlay respectively.
void Wlut::UseLayer(GLenum layer)
{
    glutUseLayer(layer);
}

/// @brief removes the overlay (if one exists) from the current window.
void Wlut::RemoveOverlay()
{
    glutRemoveOverlay();
}

/// @brief marks the overlay of the current window as needing to be redisplayed.
void Wlut::PostOverlayRedisplay()
{
    glutPostOverlayRedisplay();
}

/// @brief shows the overlay of the current window
void Wlut::ShowOverlay()
{
    glutShowOverlay();
}

/// @brief hides the overlay of the current window
void Wlut::HideOverlay()
{
    glutHideOverlay();
}

/*
 *   MENU MANAGEMENT
 *   ===============
 *
 *   Wlut supports simple cascading pop-up menus.
 *   They are designed to let a user select various modes within a program.
 *   The functionality is simple and minimalistic and is meant to be that way.
 *   Do not mistake Wlut's pop-up menu facility with an attempt to create a full-featured
 *   user interface.
 *
 *   It is illegal to create or destroy menus, or change, add, or remove menu items
 *   while a menu (and any cascaded sub-menus) are in use (that is, popped up).
 */

/// @brief Creates a new pop-up menu.
/// @param func The callback function for the menu that is called when a menu entry from the menu is selected. The value passed to the callback is determined by the value for the selected menu entry.
/// @return menu handler
int Wlut::CreateMenu(void (*func)(int value))
{
    int value = glutCreateMenu(func);
    return value;
}

/// @brief Sets the current menu
/// @param menu The identifier of the menu to make the current menu.
void Wlut::SetMenu(int menu)
{
    glutSetMenu(menu);
}

/// @brief returns the identifier of the current menu.
/// @return menu identifier
int Wlut::GetMenu()
{
    int handler = glutGetMenu();
    return handler;
}

/// @brief Destroys the specified menu.
/// @param menu The identifier of the menu to destroy.
void Wlut::DestroyMenu(int menu)
{
    glutDestroyMenu(menu);
}

/// @brief Adds a menu entry to the bottom of the current menu.
/// @param name ASCII character string to display in the menu entry.
/// @param value Value to return to the menu's callback function if the menu entry is selected.
void Wlut::AddMenuEntry(char *name, int value)
{
    glutAddMenuEntry(name, value);
}

/// @brief Adds a sub-menu trigger to the bottom of the current menu.
/// @param name ASCII character string to display in the menu item from which to cascade the sub-menu.
/// @param menu Identifier of the menu to cascade from this sub-menu menu item.
void Wlut::AddSubMenu(char *name, int menu)
{
    glutAddSubMenu(name, menu);
}

/// @brief Changes the specified menu item in the current menu into a menu entry.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
/// @param name ASCII character string to display in the menu entry.
/// @param value Value to return to the menu's callback function if the menu entry is selected.
void Wlut::ChangeToMenuEntry(int entry, char *name, int value)
{
    glutChangeToMenuEntry(entry, name, value);
}

/// @brief Changes the specified menu item in the current menu into a sub-menu trigger.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
/// @param name
/// @param menu
void Wlut::ChangeToSubMenu(int entry, char *name, int menu)
{
    glutChangeToSubMenu(entry, name, menu);
}

/// @brief remove the specified menu item.
/// @param entry Index into the menu items of the current menu (1 is the topmost menu item).
void Wlut::RemoveMenuItem(int entry)
{
    glutRemoveMenuItem(entry);
}

/// @brief Attaches a mouse button for the current window to the identifier of the current menu.
/// @param button The button to attach a menu.
void Wlut::AttachMenu(int button)
{
    glutAttachMenu(button);
}
/// @brief Detaches an attached mouse button from the current window.
/// @param button The button to detach a menu,
void Wlut::DetachMenu(int button)
{
    glutDetachMenu(button);
}

/*
 *  CALLBACK REGISTRATION
 *  =====================
 *
 *  Wlut supports a number of callbacks to respond to events. There are three types of callbacks:
 *  window, menu, and global. Window callbacks indicate when to redisplay or reshape a window,
 *  when the visibility of the window changes, and when input is available for the window.
 *  The menu callback is set by the WlutCreateMenu call described already. The global callbacks
 *  manage the passing of time and menu usage. The calling order of callbacks
 *  between different windows is undefined.
 *
 *  Callbacks for input events should be delivered to the window the event occurs in.
 *  Events should not propagate to parent windows.
 */

/// @brief Sets the display callback for the current window.
/// @param func The new display callback function.
void Wlut::DisplayFunc(void (*func)(void))
{
    glutDisplayFunc(func);
}

/// @brief Sets the overlay display callback for the current window.
/// @param func The new overlay display callback function.
void Wlut::OverlayDisplayFunc(void (*func)(void))
{
    glutOverlayDisplayFunc(func);
}

/// @brief Sets the reshape callback for the current window.
/// @param func The new reshape callback function.
void Wlut::ReshapeFunc(void (*func)(int width, int height))
{
    glutReshapeFunc(func);
};

/// @brief  Sets the keyboard callback for the current window.
/// @param func The new keyboard callback function.
void Wlut::KeyboardFunc(void (*func)(unsigned char key, int x, int y))
{
    glutKeyboardFunc(func);
}

/// @brief sets the mouse callback for the current window.
/// @param func The new mouse callback function.
void Wlut::MouseFunc(void (*func)(int button, int state, int x, int y))
{
    glutMouseFunc(func);
}

/// @brief Set the motion callback respectively for the current window.
/// @param func The new motion callback function.
void Wlut::MotionFunc(void (*func)(int x, int y))
{
    glutMotionFunc(func);
}

/// @brief Set the passive motion callback respectively for the current window.
/// @param func The new passive motion callback function.
void Wlut::PassiveMotionFunc(void (*func)(int x, int y))
{
    glutPassiveMotionFunc(func);
}

/// @brief Sets the visibility callback for the current window.
/// @param func sets the visibility callback for the current window.
void Wlut::VisibilityFunc(void (*func)(int state))
{
    glutVisibilityFunc(func);
}

/// @brief Sets the mouse enter/leave callback for the current window.
/// @param func The new entry callback function.
void Wlut::EntryFunc(void (*func)(int state))
{
    glutEntryFunc(func);
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Wlut::SpecialFunc(void (*func)(int key, int x, int y))
{
    glutSpecialFunc(func);
}

/// @brief Sets the Spaceball motion callback for the current window.
/// @param func The new entry callback function.
void Wlut::SpaceballMotionFunc(void (*func)(int x, int y, int z))
{
    glutSpaceballMotionFunc(func);
}

/// @brief Sets the Spaceball rotation callback for the current window.
/// @param func The new entry callback function.
void Wlut::SpaceballRotateFunc(void (*func)(int x, int y, int z))
{
    glutSpaceballRotateFunc(func);
}

/// @brief Sets the Spaceball button callback for the current window.
/// @param func The new entry callback function
void Wlut::SpaceballButtonFunc(void (*func)(int button, int state))
{
    glutSpaceballButtonFunc(func);
}

/// @brief Sets the dial & button box button callback for the current window.
/// @param func The new entry callback function.
void Wlut::ButtonBoxFunc(void (*func)(int button, int state))
{
    glutButtonBoxFunc(func);
}

/// @brief Sets the dial & button box dials callback for the current window.
/// @param func The new entry callback function.
void Wlut::DialsFunc(void (*func)(int dial, int value))
{
    glutDialsFunc(func);
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Wlut::TabletMotionFunc(void (*func)(int x, int y))
{
    glutTabletMotionFunc(func);
}

/// @brief Sets the special keyboard callback for the current window.
/// @param func The new entry callback function.
void Wlut::TabletButtonFunc(void (*func)(int button, int state, int x, int y))
{
    glutTabletButtonFunc(func);
}

/// @brief Sets the global menu status callback.
/// @param func The new entry callback function.
void Wlut::MenuStatusFunc(void (*func)(int status, int x, int y))
{
    glutMenuStatusFunc(func);
}

/// @brief Sets the global menu status callback.
/// @param func The new entry callback function.
void Wlut::MenuStateFunc(void (*func)(int status))
{
    glutMenuStateFunc(func);
}

/// @brief Sets the global idle callback.
/// @param func The new entry callback function.
void Wlut::IdleFunc(void (*func)(void))
{
    glutIdleFunc(func);
}

void Wlut::TimerFunc(unsigned int msecs, void (*func)(int value), int value)
{
    glutTimerFunc(msecs, func, value);
}

/*
 *  COLOR INDEX COLOEMAP MANAGEMENT
 *  ===============================
 *
 *  OpenGL supports both RGBA and color index rendering. The RGBA mode is generally preferable
 *  to color index because more OpenGL rendering capabilities are available and color index
 *  mode requires the loading of colormap entries.
 *
 *  The Wlut color index routines are used to write and read entries in a window's color index
 *  colormap. Every Wlut color index window has its own logical color index colormap. The size
 *  of a window's colormap can be determined by calling WlutGet(Wlut_WINDOW_COLORMAP_SIZE).
 *
 *  Wlut color index windows within a program can attempt to share colormap resources by copying
 *  a single color index colormap to multiple windows using WlutCopyColormap. If possible Wlut
 *  will attempt to share the actual colormap. While copying colormaps using WlutCopyColormap
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
void Wlut::SetColor(int cell, GLfloat red, GLfloat green, GLfloat blue)
{
    glutSetColor(cell, red, green, blue);
}

/// @brief Retrieves a red, green, or blue component for a given color index colormap entry for the layer in use's logical colormap for the current window.
/// @param cell Color cell index (starting at zero).
/// @param component One of Wlut_RED, Wlut_GREEN, or Wlut_BLUE.
/// @return GLfloat is a floating point value between 0.0 and 1.0 inclusive.
GLfloat Wlut::GetColor(int cell, int component)
{
    GLfloat value = glutGetColor(cell, component);
    return value;
}

/// @brief copies the logical colormap for the layer in use from a specified window to the current window.
/// @param win The identifier of the window to copy the logical colormap from.
void Wlut::CopyColormap(int win)
{
    glutCopyColormap(win);
}

/*
 * STATE RETRIEVAl
 * ===============
 *
 * Wlut maintains a considerable amount of programmer visible state. Some (but not all) of
 * this state may be directly retrieved.
 */

/// @brief Retrieves simple Wlut state represented by integers.
/// @param state Name of state to retrieve.
/// @return int simple Wlut state represented by integers
int Wlut::Get(GLenum state)
{
    int value = glutGet(state);
    return value;
}

/// @brief Retrieves Wlut state pertaining to the layers of the current window.
/// @param info Name of device information to retrieve.
/// @return int Wlut layer information for the current window represented by integers
int Wlut::LayerGet(GLenum info)
{
    int value = glutLayerGet(info);
    return value;
}

/// @brief Retrieves Wlut device information represented by integers.
/// @param info Name of device information to retrieve.
/// @return int Wlut device information represented by integers.
int Wlut::DeviceGet(GLenum info)
{
    int value = glutDeviceGet(info);
    return value;
}

/// @brief returns the modifier key state when certain callbacks were generated.
/// @return int the modifier key state at the time the input event for a keyboard, special, or mouse callback is generated
int Wlut::GetModifiers()
{
    int value = glutGetModifiers();
    return value;
}

/// @brief helps to easily determine whether a given OpenGL extension is supported.
/// @param extension Name of OpenGL extension.
/// @return int  non-zero if the extension is supported, zero if not supported.
int Wlut::ExtensionSupported(char *extension)
{
    int value = glutExtensionSupported(extension);
    return value;
}

/*
 * FONT RENDERING
 * ==============
 *
 * Wlut supports two type of font rendering: stroke fonts, meaning each character is rendered
 * as a set of line segments; and bitmap fonts, where each character is a bitmap generated
 * with glBitmap. Stroke fonts have the advantage that because they are geometry, they can be
 * arbitrarily scale and rendered. Bitmap fonts are less flexible since they are rendered as
 * bitmaps but are usually faster than stroke fonts.
 */

/// @brief Renders a bitmap character using OpenGL.
/// @param font Bitmap font to use.
/// @param character Character to render (not confined to 8 bits).
void Wlut::BitmapCharacter(void *font, int character)
{
    glutBitmapCharacter(font, character);
}

/// @brief Returns the width of a bitmap character.
/// @param font Bitmap font to use.
/// @param character Character to return width of (not confined to 8 bits).
/// @return int returns the width in pixels of a bitmap character in a supported bitmap font
int Wlut::BitmapWidth(void *font, int character)
{
    int value = glutBitmapWidth(font, character);
    return value;
}

/// @brief Renders a stroke character using OpenGL.
/// @param font Stroke font to use.
/// @param character Character to render (not confined to 8 bits).
void Wlut::StrokeCharacter(void *font, int character)
{
    glutStrokeCharacter(font, character);
}

/// @brief Returns the width of a stroke character.
/// @param font troke font to use.
/// @param character Character to return width of (not confined to 8 bits)
/// @return the width in pixels of a stroke character in a supported stroke font.
int Wlut::StrokeWidth(void *font, int character)
{
    int value = glutStrokeWidth(font, character);
    return value;
}

/*
 *  Geometric Object Rendering
 *  ==========================
 *
 *  Wlut includes a number of routines for generating easily recognizable 3D geometric objects.
 *  These routines reflect functionality available in the aux toolkit described in the OpenGL
 *  Programmer's Guide and are included in Wlut to allow the construction of simple Wlut
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
void Wlut::SolidSphere(GLdouble radius, GLint slices, GLint stacks)
{
    glutSolidSphere(radius, slices, stacks);
}

/// @brief render a wireframe sphere respectively.
/// @param radius The radius of the sphere.
/// @param slices The number of subdivisions around the Z axis (similar to lines of longitude).
/// @param stacks The number of subdivisions along the Z axis (similar to lines of latitude).
void Wlut::WireSphere(GLdouble radius, GLint slices, GLint stacks)
{
    glutWireSphere(radius, slices, stacks);
}

/// @brief Render a solid cube respectively.
/// @param size The size of the cube.
void Wlut::SolidCube(GLdouble size)
{
    glutSolidCube(size);
}
/// @brief Render a wireframe cube respectively.
/// @param size The size of the cube.
void Wlut::WireCube(GLdouble size)
{
    glutWireCube(size);
}

/// @brief Render a solid cone respectively.
/// @param base
/// @param height
/// @param slices
/// @param stacks
void Wlut::SolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
    glutSolidCone(base, height, slices, stacks);
}
/// @brief Render a wireframe cone respectively.
/// @param base The radius of the base of the cone.
/// @param height The height of the cone.
/// @param slices The number of subdivisions around the Z axis.
/// @param stacks The number of subdivisions along the Z axis.
void Wlut::WireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
    glutWireCone(base, height, slices, stacks);
}

/// @brief Render a solid torus (doughnut) respectively.
/// @param innerRadius Inner radius of the torus.
/// @param outerRadius Outer radius of the torus.
/// @param nsides Number of sides for each radial section.
/// @param rings Number of radial divisions for the torus.
void Wlut::SolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings)
{
    glutSolidTorus(innerRadius, outerRadius, nsides, rings);
}

/// @brief Render a wireframe torus (doughnut) respectively.
/// @param innerRadius Inner radius of the torus.
/// @param outerRadius Outer radius of the torus.
/// @param nsides Number of sides for each radial section.
/// @param rings Number of radial divisions for the torus.
void Wlut::WireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings)
{
    glutWireTorus(innerRadius, outerRadius, nsides, rings);
}

/// @brief Render a solid dodecahedron (12-sided regular solid) respectively.
void Wlut::SolidDodecahedron()
{
    glutSolidDodecahedron();
}

/// @brief Render a wireframe dodecahedron (12-sided regular solid) respectively.
void Wlut::WireDodecahedron()
{
    glutWireDodecahedron();
}

/// @brief Render a solid octahedron (8-sided regular solid) respectively.
void Wlut::SolidOctahedron()
{
    glutSolidOctahedron();
}

/// @brief Render a wireframe octahedron (8-sided regular solid) respectively.
void Wlut::WireOctahedron()
{
    glutWireOctahedron();
}

/// @brief Render a solid tetrahedron (4-sided regular solid) respectively.
void Wlut::SolidTetrahedron()
{
    glutSolidTetrahedron();
}
/// @brief render a wireframe tetrahedron (4-sided regular solid) respectively.
void Wlut::WireTetrahedron()
{
    glutWireTetrahedron();
}

/// @brief Render a solid icosahedron (20-sided regular solid) respectively.
void Wlut::SolidIcosahedron()
{
    glutSolidIcosahedron();
}

/// @brief Render a wireframe icosahedron (20-sided regular solid) respectively.
void Wlut::WireIcosahedron()
{
    glutWireIcosahedron();
}

/// @brief Render a solid teapotgif respectively.
/// @param size Relative size of the teapot.
void Wlut::SolidTeapot(GLdouble size)
{
    glutSolidTeapot(size);
}
/// @brief Render a wireframe teapotgif respectively.
/// @param size Relative size of the teapot.
void Wlut::WireTeapot(GLdouble size)
{
    glutWireTeapot(size);
}