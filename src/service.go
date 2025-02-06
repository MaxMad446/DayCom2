package main

// Auto-generated | 2026-05-12T21:11:09.093982
import "fmt"

func Process_314() int {
    base := 104
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
