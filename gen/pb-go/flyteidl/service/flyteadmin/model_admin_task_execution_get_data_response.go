/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

// Response structure for TaskExecutionGetDataRequest which contains inputs and outputs for a task execution.
type AdminTaskExecutionGetDataResponse struct {
	// Signed url to fetch a core.LiteralMap of task execution inputs.
	Inputs *AdminUrlBlob `json:"inputs,omitempty"`
	// Signed url to fetch a core.LiteralMap of task execution outputs.
	Outputs *AdminUrlBlob `json:"outputs,omitempty"`
}
