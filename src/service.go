package main

// Auto-generated | 2026-05-14T06:18:26.336398
import "fmt"

func Process_314() int {
    base := 445
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
