//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCompatibilityDelegate.h"

__attribute__((visibility("hidden")))
@interface KNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>
{
}

- (id)nestedDocumentFilename;
- (id)needNewerVersionIndexXmlContentString;
- (id)indexXmlFilename;
- (BOOL)isSageDocumentType:(id)arg1;
- (BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)exportableTypes;
- (Class)exportOptionsControllerClass;
- (Class)pdfExporterClassForOptions:(id)arg1;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1;
- (id)newExportableDocumentTypesForFlag:(unsigned int)arg1;

@end

