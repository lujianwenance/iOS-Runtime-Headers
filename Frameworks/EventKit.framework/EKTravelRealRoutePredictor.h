/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKTravelAgendaItem, EKTravelRealRoutePredictorInternalDelegate, GEOComposedWaypoint, GEOQuickETARequester, GEORouteHypothesizer, NSDate, NSString;

@interface EKTravelRealRoutePredictor : NSObject <EKTravelRoutePredictor> {
    EKTravelAgendaItem *_agendaItem;
    NSDate *_arrivalDate;
    GEOComposedWaypoint *_destinationWaypoint;
    GEORouteHypothesizer *_hypothesizer;
    EKTravelRealRoutePredictorInternalDelegate *_hypothesizerDelegate;
    GEOQuickETARequester *_quickHypothesizer;
    GEOComposedWaypoint *_sourceWaypoint;
    int _travelMethod;
    bool_hypothesisInProgress;
}

@property EKTravelAgendaItem * agendaItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) int travelMethod;

- (void)_getAutomobilePredictionFrom:(id)arg1 handler:(id)arg2;
- (void)_getOneshotPredictionFrom:(id)arg1 transportType:(int)arg2 handler:(id)arg3;
- (void)_newHypothesizer;
- (void)_newQuickHypothesizerWithRequest:(id)arg1;
- (id)agendaItem;
- (void)dealloc;
- (id)initWithSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 travelMethod:(int)arg4;
- (void)setAgendaItem:(id)arg1;
- (int)travelMethod;
- (void)updateLocation:(id)arg1 handler:(id)arg2;

@end
