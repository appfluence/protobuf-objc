// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

// @@protoc_insertion_point(imports)

@class TestMessage;
@class TestMessageBuilder;


typedef NS_ENUM(SInt32, TestEnum) {
  TestEnumFoo = 1,
};

BOOL TestEnumIsValidValue(TestEnum value);
NSString *NSStringFromTestEnum(TestEnum value);


@interface UnittestNoGenericServicesRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
+ (id<PBExtensionField>) testExtension;
@end

#define TestMessage_a @"a"
@interface TestMessage : PBExtendableMessage<GeneratedMessageProtocol> {
@private
  BOOL hasA_:1;
  SInt32 a;
}
- (BOOL) hasA;
@property (readonly) SInt32 a;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageBuilder*) builder;
+ (TestMessageBuilder*) builder;
+ (TestMessageBuilder*) builderWithPrototype:(TestMessage*) prototype;
- (TestMessageBuilder*) toBuilder;

+ (TestMessage*) parseFromData:(NSData*) data;
+ (TestMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessage*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageBuilder : PBExtendableMessageBuilder {
@private
  TestMessage* resultTestMessage;
}

- (TestMessage*) defaultInstance;

- (TestMessageBuilder*) clear;
- (TestMessageBuilder*) clone;

- (TestMessage*) build;
- (TestMessage*) buildPartial;

- (TestMessageBuilder*) mergeFrom:(TestMessage*) other;
- (TestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasA;
- (SInt32) a;
- (TestMessageBuilder*) setA:(SInt32) value;
- (TestMessageBuilder*) clearA;
@end


// @@protoc_insertion_point(global_scope)
