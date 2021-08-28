package main

// Auto-generated | 2026-05-11T20:28:40.132948
import "fmt"

func Process_169() int {
    base := 198
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
