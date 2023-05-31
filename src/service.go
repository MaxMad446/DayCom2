package main

// Auto-generated | 2026-05-13T20:39:28.794478
import "fmt"

func Process_325() int {
    base := 126
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_325())
}
