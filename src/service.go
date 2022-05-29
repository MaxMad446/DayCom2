package main

// Auto-generated | 2026-05-13T22:13:07.486892
import "fmt"

func Process_615() int {
    base := 320
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_615())
}
