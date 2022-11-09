/*************************************************************************/
/*  visual_server_constants.h                                            */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#ifndef VISUAL_SERVER_CONSTANTS_H
#define VISUAL_SERVER_CONSTANTS_H

// Use for constants etc that need not be included as often as VisualServer.h
// to reduce dependencies and prevent slow compilation.

// This is a "cheap" include, and can be used from scene side code as well as servers.

// Uncomment to provide comparison of node culling versus item culling
// #define VISUAL_SERVER_CANVAS_TIME_NODE_CULLING

// N.B. ONLY allow these defined in DEV_ENABLED builds, they will slow
// performance, and are only necessary to use for debugging.
#ifdef DEV_ENABLED

// Uncomment this define to store canvas item names in VisualServerCanvas.
// This is relatively expensive, but is invaluable for debugging the canvas scene tree
// especially using _print_tree() in VisualServerCanvas.
// #define VISUAL_SERVER_CANVAS_DEBUG_ITEM_NAMES

// Uncomment this define to verify local bounds of canvas items,
// to check that the hierarchical culling is working correctly.
// This is expensive.
// #define VISUAL_SERVER_CANVAS_CHECK_BOUNDS

#endif // DEV_ENABLED

#endif // VISUAL_SERVER_CONSTANTS_H
