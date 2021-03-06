/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

// Metadata for the entire workflow. Defines execution behavior that does not change the final outputs of the workflow.
type CoreWorkflowMetadata struct {
	// Total wait time a workflow can be delayed by queueing.
	QueuingBudget string `json:"queuing_budget,omitempty"`
	// Defines how the system should behave when a failure is detected in the workflow execution.
	OnFailure *WorkflowMetadataOnFailurePolicy `json:"on_failure,omitempty"`
}
