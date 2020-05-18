/**
  ******************************************************************************
  * @file    Camera.h
  * @author  Joshua Haden
  * @version V0.0.0
  * @date    03-DEC-2019
  * @brief   Header for Camera.cpp
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
class Camera
{
public:
    
    Camera();
    Camera( int screenWidth, int screenHeight );

    void SetViewport( int x, int y, int width, int height );
    glm::vec4 GetViewport() const;
    
    void SetProjectionRH( float fov, float aspectRatio, float zNear, float zFar );

    void ApplyViewMatrix();

    void SetPosition( const glm::vec3& pos );
    glm::vec3 GetPosition() const;

    void Translate( const glm::vec3& delta, bool local = true );

    void SetRotation( const glm::quat& rot );
    glm::quat GetRotation() const;

    void SetEulerAngles( const glm::vec3& eulerAngles );
    glm::vec3 GetEulerAngles() const;

    void Rotate( const glm::quat& rot );

    glm::mat4 GetProjectionMatrix();
    glm::mat4 GetViewMatrix();

protected:

    void UpdateViewMatrix();

    glm::vec4 m_Viewport;

    glm::vec3 m_Position;
    glm::quat m_Rotation;

    glm::mat4 m_ViewMatrix;
    glm::mat4 m_ProjectionMatrix;

private:
    bool m_ViewDirty;
};