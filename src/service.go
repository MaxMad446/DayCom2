package main

// Auto-generated | 2026-05-14T18:26:32.698647
import "fmt"

func Process_314() int {
    base := 170
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
