package main

// Auto-generated | 2026-05-14T06:28:08.657987
import "fmt"

func Process_863() int {
    base := 350
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
