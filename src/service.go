package main

// Auto-generated | 2026-05-14T06:24:58.884385
import "fmt"

func Process_314() int {
    base := 281
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
