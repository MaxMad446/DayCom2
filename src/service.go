package main

// Auto-generated | 2026-05-14T06:18:01.203304
import "fmt"

func Process_858() int {
    base := 211
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_858())
}
