/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartInfo;

@interface TSCHChunkManager : NSObject {
    TSCHChartInfo *mChartInfo;
    unsigned int mChunkMapCount;
    unsigned int *mSeriesMap;
    unsigned int *mValuesMap;
}

+ (id)p_allChartDeliveryStylesLocalized:(BOOL)arg1;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(BOOL)arg1;

- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned int)arg2 finalTexture:(BOOL)arg3 seriesStart:(int*)arg4 seriesCount:(int*)arg5;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned int)arg2 chunkIndex:(unsigned int)arg3 finalTexture:(BOOL)arg4 valueStart:(int*)arg5 valueCount:(int*)arg6;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (unsigned int)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (unsigned int)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned int)arg1;
- (unsigned int)chunkCountForChartDeliveryStyle:(unsigned int)arg1;
- (void)clearCaches;
- (void)dealloc;
- (BOOL)hasBackgroundLayerForPieChart;
- (id)initWithChartInfo:(id)arg1;
- (BOOL)lastChunkForSeriesIndex:(unsigned int)arg1 currentChunk:(unsigned int)arg2 chunkStyle:(unsigned int)arg3;
- (BOOL)p_canAddChunkForSeries:(id)arg1 valueIndex:(int)arg2;
- (unsigned int)p_chunkCountForChartDeliveryStyle:(unsigned int)arg1;
- (BOOL)p_hasBackgroundFill;
- (BOOL)p_isMultiData;
- (BOOL)p_isPie;
- (BOOL)p_legendOn;
- (BOOL)p_titleOn;
- (void)p_updateCacheForElementsInSeries;
- (void)p_updateCacheForElementsInSets;
- (void)p_updateCacheForSeries;
- (void)p_updateCacheForSets;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (void)updateCache:(unsigned int)arg1;

@end
