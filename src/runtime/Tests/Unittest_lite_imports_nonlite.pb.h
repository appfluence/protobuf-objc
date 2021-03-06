// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "Unittest.pb.h"
// @@protoc_insertion_point(imports)

@class BarRequest;
@class BarRequestBuilder;
@class BarResponse;
@class BarResponseBuilder;
@class BoolMessage;
@class BoolMessageBuilder;
@class FooClientMessage;
@class FooClientMessageBuilder;
@class FooRequest;
@class FooRequestBuilder;
@class FooResponse;
@class FooResponseBuilder;
@class FooServerMessage;
@class FooServerMessageBuilder;
@class ForeignMessage;
@class ForeignMessageBuilder;
@class ImportMessage;
@class ImportMessageBuilder;
@class Int32Message;
@class Int32MessageBuilder;
@class Int64Message;
@class Int64MessageBuilder;
@class MoreBytes;
@class MoreBytesBuilder;
@class MoreString;
@class MoreStringBuilder;
@class NestedTestAllTypes;
@class NestedTestAllTypesBuilder;
@class OneBytes;
@class OneBytesBuilder;
@class OneString;
@class OneStringBuilder;
@class OptionalGroup_extension;
@class OptionalGroup_extensionBuilder;
@class PublicImportMessage;
@class PublicImportMessageBuilder;
@class RepeatedGroup_extension;
@class RepeatedGroup_extensionBuilder;
@class SparseEnumMessage;
@class SparseEnumMessageBuilder;
@class TestAllExtensions;
@class TestAllExtensionsBuilder;
@class TestAllTypes;
@class TestAllTypesBuilder;
@class TestAllTypesNestedMessage;
@class TestAllTypesNestedMessageBuilder;
@class TestAllTypesOptionalGroup;
@class TestAllTypesOptionalGroupBuilder;
@class TestAllTypesRepeatedGroup;
@class TestAllTypesRepeatedGroupBuilder;
@class TestCamelCaseFieldNames;
@class TestCamelCaseFieldNamesBuilder;
@class TestCommentInjectionMessage;
@class TestCommentInjectionMessageBuilder;
@class TestDeprecatedFields;
@class TestDeprecatedFieldsBuilder;
@class TestDupFieldNumber;
@class TestDupFieldNumberBar;
@class TestDupFieldNumberBarBuilder;
@class TestDupFieldNumberBuilder;
@class TestDupFieldNumberFoo;
@class TestDupFieldNumberFooBuilder;
@class TestDynamicExtensions;
@class TestDynamicExtensionsBuilder;
@class TestDynamicExtensionsDynamicMessageType;
@class TestDynamicExtensionsDynamicMessageTypeBuilder;
@class TestEagerMessage;
@class TestEagerMessageBuilder;
@class TestEmptyMessage;
@class TestEmptyMessageBuilder;
@class TestEmptyMessageWithExtensions;
@class TestEmptyMessageWithExtensionsBuilder;
@class TestExtremeDefaultValues;
@class TestExtremeDefaultValuesBuilder;
@class TestFieldOrderings;
@class TestFieldOrderingsBuilder;
@class TestForeignNested;
@class TestForeignNestedBuilder;
@class TestLazyMessage;
@class TestLazyMessageBuilder;
@class TestLiteImportsNonlite;
@class TestLiteImportsNonliteBuilder;
@class TestMultipleExtensionRanges;
@class TestMultipleExtensionRangesBuilder;
@class TestMutualRecursionA;
@class TestMutualRecursionABuilder;
@class TestMutualRecursionB;
@class TestMutualRecursionBBuilder;
@class TestNestedExtension;
@class TestNestedExtensionBuilder;
@class TestNestedMessageHasBits;
@class TestNestedMessageHasBitsBuilder;
@class TestNestedMessageHasBitsNestedMessage;
@class TestNestedMessageHasBitsNestedMessageBuilder;
@class TestOneof;
@class TestOneof2;
@class TestOneof2Builder;
@class TestOneof2FooGroup;
@class TestOneof2FooGroupBuilder;
@class TestOneof2NestedMessage;
@class TestOneof2NestedMessageBuilder;
@class TestOneofBackwardsCompatible;
@class TestOneofBackwardsCompatibleBuilder;
@class TestOneofBackwardsCompatibleFooGroup;
@class TestOneofBackwardsCompatibleFooGroupBuilder;
@class TestOneofBuilder;
@class TestOneofFooGroup;
@class TestOneofFooGroupBuilder;
@class TestPackedExtensions;
@class TestPackedExtensionsBuilder;
@class TestPackedTypes;
@class TestPackedTypesBuilder;
@class TestParsingMerge;
@class TestParsingMergeBuilder;
@class TestParsingMergeOptionalGroup;
@class TestParsingMergeOptionalGroupBuilder;
@class TestParsingMergeRepeatedFieldsGenerator;
@class TestParsingMergeRepeatedFieldsGeneratorBuilder;
@class TestParsingMergeRepeatedFieldsGeneratorGroup1;
@class TestParsingMergeRepeatedFieldsGeneratorGroup1Builder;
@class TestParsingMergeRepeatedFieldsGeneratorGroup2;
@class TestParsingMergeRepeatedFieldsGeneratorGroup2Builder;
@class TestParsingMergeRepeatedGroup;
@class TestParsingMergeRepeatedGroupBuilder;
@class TestReallyLargeTagNumber;
@class TestReallyLargeTagNumberBuilder;
@class TestRecursiveMessage;
@class TestRecursiveMessageBuilder;
@class TestRepeatedScalarDifferentTagSizes;
@class TestRepeatedScalarDifferentTagSizesBuilder;
@class TestRequired;
@class TestRequiredBuilder;
@class TestRequiredForeign;
@class TestRequiredForeignBuilder;
@class TestRequiredOneof;
@class TestRequiredOneofBuilder;
@class TestRequiredOneofNestedMessage;
@class TestRequiredOneofNestedMessageBuilder;
@class TestUnpackedExtensions;
@class TestUnpackedExtensionsBuilder;
@class TestUnpackedTypes;
@class TestUnpackedTypesBuilder;
@class Uint32Message;
@class Uint32MessageBuilder;
@class Uint64Message;
@class Uint64MessageBuilder;



@interface UnittestLiteImportsNonliteRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define TestLiteImportsNonlite_message @"message"
@interface TestLiteImportsNonlite : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasMessage_:1;
  TestAllTypes* message;
}
- (BOOL) hasMessage;
@property (readonly, strong) TestAllTypes* message;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestLiteImportsNonliteBuilder*) builder;
+ (TestLiteImportsNonliteBuilder*) builder;
+ (TestLiteImportsNonliteBuilder*) builderWithPrototype:(TestLiteImportsNonlite*) prototype;
- (TestLiteImportsNonliteBuilder*) toBuilder;

+ (TestLiteImportsNonlite*) parseFromData:(NSData*) data;
+ (TestLiteImportsNonlite*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestLiteImportsNonlite*) parseFromInputStream:(NSInputStream*) input;
+ (TestLiteImportsNonlite*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestLiteImportsNonlite*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestLiteImportsNonlite*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestLiteImportsNonliteBuilder : PBGeneratedMessageBuilder {
@private
  TestLiteImportsNonlite* resultTestLiteImportsNonlite;
}

- (TestLiteImportsNonlite*) defaultInstance;

- (TestLiteImportsNonliteBuilder*) clear;
- (TestLiteImportsNonliteBuilder*) clone;

- (TestLiteImportsNonlite*) build;
- (TestLiteImportsNonlite*) buildPartial;

- (TestLiteImportsNonliteBuilder*) mergeFrom:(TestLiteImportsNonlite*) other;
- (TestLiteImportsNonliteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestLiteImportsNonliteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMessage;
- (TestAllTypes*) message;
- (TestLiteImportsNonliteBuilder*) setMessage:(TestAllTypes*) value;
- (TestLiteImportsNonliteBuilder*) setMessageBuilder:(TestAllTypesBuilder*) builderForValue;
- (TestLiteImportsNonliteBuilder*) mergeMessage:(TestAllTypes*) value;
- (TestLiteImportsNonliteBuilder*) clearMessage;
@end


// @@protoc_insertion_point(global_scope)
