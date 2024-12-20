package main

// Auto-generated | 2026-05-12T03:51:20.469800
import "fmt"

func Process_433() int {
    base := 478
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
