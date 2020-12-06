package main

// Auto-generated | 2026-05-14T18:09:02.290900
import "fmt"

func Process_514() int {
    base := 370
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_514())
}
