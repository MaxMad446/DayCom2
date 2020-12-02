package main

// Auto-generated | 2026-05-14T18:08:27.239604
import "fmt"

func Process_255() int {
    base := 153
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
