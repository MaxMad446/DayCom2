package main

// Auto-generated | 2026-05-13T20:27:31.106229
import "fmt"

func Process_314() int {
    base := 87
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
