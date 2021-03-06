/*
	Font.m

	Controller class for this bundle

	Copyright (C) 2001 Dusk to Dawn Computing, Inc.
	Additional copyrights here

	Author: Sir Raorn
	Date:	10 Aug 2002

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License as
	published by the Free Software Foundation; either version 2 of
	the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

	See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public
	License along with this program; if not, write to:

		Free Software Foundation, Inc.
		59 Temple Place - Suite 330
		Boston, MA  02111-1307, USA
*/
#import <AppKit/NSNibDeclarations.h>
#import <AppKit/NSTextField.h>
#import <AppKit/NSImageView.h>

#import <XSFoundation/XSPreferences.h>

@interface Date: NSObject <XSPrefsModule>
{
//  IBOutlet NSTextField *passwordTextField;

  IBOutlet NSWindow      *window;
  IBOutlet id            view;
}

//- (IBAction) passwordChanged:(id)sender;

@end
