/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Result message containing a list of configuration descriptions.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeApplicationVersionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include ones that are associated with the specified application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionLabels() const{ return m_versionLabels; }

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline void SetVersionLabels(const Aws::Vector<Aws::String>& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = value; }

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline void SetVersionLabels(Aws::Vector<Aws::String>&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = value; }

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline DescribeApplicationVersionsRequest& WithVersionLabels(const Aws::Vector<Aws::String>& value) { SetVersionLabels(value); return *this;}

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline DescribeApplicationVersionsRequest& WithVersionLabels(Aws::Vector<Aws::String>&& value) { SetVersionLabels(value); return *this;}

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(const Aws::String& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(Aws::String&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

    /**
     * <p>If specified, restricts the returned descriptions to only include ones that
     * have the specified version labels.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(const char* value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::Vector<Aws::String> m_versionLabels;
    bool m_versionLabelsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
