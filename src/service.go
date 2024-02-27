package main

// Auto-generated | 2026-05-14T18:21:52.151437
import "fmt"

func Process_781() int {
    base := 495
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
