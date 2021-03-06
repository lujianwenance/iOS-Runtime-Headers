/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntity : HDDataEntity {
}

+ (void)_enumerateObjectIDsWithPredicate:(id)arg1 database:(id)arg2 callback:(id)arg3;
+ (id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 database:(id)arg3;
+ (id)_insertAssociationTuples:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)_propertySettersForDataObject;
+ (bool)_removeAssociationRecordsForAssociationEntity:(id)arg1 database:(id)arg2;
+ (bool)_removeAssociationRecordsForObject:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (void)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(bool)arg3 database:(id)arg4;
+ (bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(bool)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (void)load;
+ (id)objectIDsForAssociationEntity:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;

@end
