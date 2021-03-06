//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class NSTextStorage;

@interface _MSTextLayer : MSStyledLayer
{
    BOOL _automaticallyDrawOnUnderlyingPath;
    BOOL _dontSynchroniseWithSymbol;
    BOOL _heightIsClipped;
    BOOL _usesNewLineSpacingBehaviour;
    NSTextStorage *_storage;
    long long _textBehaviour;
}


@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
@property(nonatomic) BOOL heightIsClipped; // @synthesize heightIsClipped=_heightIsClipped;
- (id)immutableModelObject;
- (void)initEmptyObject;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (BOOL)primitiveAutomaticallyDrawOnUnderlyingPath;
- (BOOL)primitiveDontSynchroniseWithSymbol;
- (BOOL)primitiveHeightIsClipped;
- (id)primitiveStorage;
- (long long)primitiveTextBehaviour;
- (BOOL)primitiveUsesNewLineSpacingBehaviour;
- (void)setAsParentOnChildren;
- (void)setPrimitiveAutomaticallyDrawOnUnderlyingPath:(BOOL)arg1;
- (void)setPrimitiveDontSynchroniseWithSymbol:(BOOL)arg1;
- (void)setPrimitiveHeightIsClipped:(BOOL)arg1;
- (void)setPrimitiveStorage:(id)arg1;
- (void)setPrimitiveTextBehaviour:(long long)arg1;
- (void)setPrimitiveUsesNewLineSpacingBehaviour:(BOOL)arg1;
@property(retain, nonatomic) NSTextStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(nonatomic) BOOL usesNewLineSpacingBehaviour; // @synthesize usesNewLineSpacingBehaviour=_usesNewLineSpacingBehaviour;

@end

